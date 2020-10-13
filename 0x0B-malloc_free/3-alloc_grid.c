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

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
/**
 * **alloc_grid - 2d array
 * @width: row length
 * @height: column length
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array = malloc(width * sizeof(int *)), i, y;

	if ((width && height <= 0) || width <= 0 || height <= 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		array[i] = malloc(height * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		for (y = 0; y < height; y++)
		{
			array[i][y] = 0;
		}
	}
	return (array);
}
