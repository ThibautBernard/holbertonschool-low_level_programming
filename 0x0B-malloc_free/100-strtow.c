#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int i, count = 0;

	if (s == NULL)
		return (0);
	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
/**
 * n_word - give number of word to save in the array
 * @str: string given
 * Return: number of word
 */
int n_word(char *str)
{
	int i, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			counter++;
	}
	counter = counter - 1;
	return (counter);
}
/**
 * free_array - free alocate memory
 * @ptr: adress of array
 * @n: n max
 * Return: nothing
 */
void free_array(char **ptr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}
/**
 * **strtow - split words in a string into array without counting space
 * @str: string given
 * Return: the array
 */
char **strtow(char *str)
{
	int i, m = 0, y = 0, s = 0, counter = 0, l = 0, length = 0;
	char **ptr;

	length = _strlen(str);
	if (str == NULL || str == 0)
		return (NULL);
	counter = n_word(str);
	ptr = malloc(sizeof(char *) * counter);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < counter; i++)
	{
		ptr[i] = malloc(sizeof(char) * length);
		if (ptr[i] == NULL)
		{
			free_array(ptr, counter);
			return (NULL);
		}
		for (m = 0; m < length; m++)
		{
			if (str[s] == ' ' && l > 0)
				break;
			if (str[s] != ' ')
			{
				ptr[i][y] = str[s];
				y++;
				l++;
			}
			s++;
		}
		ptr[i][y] = '\0';
		y = 0;
		l = 0;
	}
	return (ptr);
}
