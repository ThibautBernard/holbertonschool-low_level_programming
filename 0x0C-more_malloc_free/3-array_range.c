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
	int *arr, i, y = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max;)
	{
		arr[y] = i;
		y++;
		i++;
	}
	arr[y + 1] = '\0';
	return (arr);
}
