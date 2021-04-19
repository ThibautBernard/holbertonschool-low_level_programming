#include "search_algos.h"
#include <math.h>
/**
 * print_array - print an array
 * @array: the array
 * @l: the start of the array to print
 * @r: the end of the array to print
 * Return: nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = l;

	if (l <= r)
	{
		printf("Searching in array: ");
		for (; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
	}
}

/**
 * binary_search - search a value in an array
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid = 0;

	print_array(array, l, size - 1);
	for (; l <= r;)
	{
		mid = ((l + r) / 2);
		if (array[mid] < value)
		{
			l = mid + 1;
			print_array(array, l, r);
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
			print_array(array, l, r);
		}
		else
			return (mid);
	}
	return (-1);
}
