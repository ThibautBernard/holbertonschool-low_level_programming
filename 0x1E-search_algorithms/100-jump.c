#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a value in an array
 * first jump and then do the search linerally
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size), i = 0;
	size_t x;

	printf("Value checked array[%d] = [%d]\n", array[0], array[0]);
	while (array[m] < value && m < size)
	{
		printf("Value checked array[%d] = [%d]\n", array[m], array[m]);
		i = m;
		m += sqrt(size);
		if (m > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, m);
			printf("Value checked array[%d] = [%d]\n", array[i], array[i]);
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, m);
	for (x = i; x <= m; x++)
	{
		printf("Value checked array[%d] = [%d]\n", array[x], array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
