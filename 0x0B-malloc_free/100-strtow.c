#include "holberton.h"
#include <stdlib.h>
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
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' && count > 0)
			break;
		if (s[i] != ' ')
			count++;
	}
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
		if ((str[i - 1] == ' ' && str[i] != ' ') || (str[i] != ' ' && i == 0))
			counter++;
	}
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
	int i, m = 0, y = 0, z = 0, counter = 0,  length = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	counter = n_word(str);
	if (counter == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (counter + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < counter; i++)
	{
		for (; str[z] != '\0'; z++)
		{
			if (str[z] != ' ')
				break;
		}
		length = _strlen(str + z);
		ptr[i] = malloc(sizeof(char) * (length + 1));
		if (ptr[i] == NULL)
		{
			free_array(ptr, i);
			return (NULL);
		}
		for (m = z; m < (length + z); m++)
		{
			ptr[i][y] = str[m];
			y++;
		}
		z += length;
		ptr[i][y] = '\0';
		y = 0;
	}
	ptr[i] = '\0';
	return (ptr);
}
