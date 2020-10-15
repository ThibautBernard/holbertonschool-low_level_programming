#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - allocate an array and fill of min to max
 * @min: first element
 * @max: last element
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	arr[i] = '\0';
	return (arr);
}
