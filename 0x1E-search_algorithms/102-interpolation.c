#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - search a value in a array
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	if (array[low] == value)
		return (low);
	mid = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
