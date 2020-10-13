#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - 2d array
 * @width: row length
 * @height: column length
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, y, m;

	if (width <= 0 || height <= 0)
		return (0);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (m = 0; m < i; m++)
				free(array[m]);
			free(array);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			array[i][y] = 0;
		}
	}
	return (array);
}
