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
	size_t jump = sqrt(size), b_jump = 0;
	size_t x;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", array[0], array[0]);
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		b_jump = jump;
		jump += sqrt(size);
		if (jump > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", b_jump, jump);
			printf("Value checked array[%ld] = [%d]\n", b_jump, array[b_jump]);
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", b_jump, jump);
	for (x = b_jump; x <= jump; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
