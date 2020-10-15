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
	int *arr, i, y = 0, size = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(sizeof(int) * (size) + 1);
	if (arr == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		arr[y] = i;
		y++;
		i++;
	}
	arr[y] = '\0';
	return (arr);
}
