#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - allocate an array and fill of min to max
 * @min: first element
 * @max: last element
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i, y = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[y] = i;
		y++;
	}
	arr[y] = '\0';
	return (arr);
}
