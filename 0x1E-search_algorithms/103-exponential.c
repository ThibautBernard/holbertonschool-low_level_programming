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
 * binarySearch - find index of a value in array
 * @arr: the array
 * @l: the start of the array to print
 * @r: the end of the array to print
 * @x: the value to find
 * Return: nothing
 */
int binarySearch(int arr[], int l, int r, int x)
{
	int mid;

	if (r >= l)
	{
		print_array(arr, l, r);
		mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return (mid);
		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));
		return (binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}
/**
 * min - find the minumum
 * @a: first int
 * @b: second int
 * Return: the min
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * exponential_search - find the range to find a value
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	char *msg;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	msg = "Value found between indexes [%ld] and [%d]\n";
	printf(msg, bound / 2, min(bound, size - 1));
	return (binarySearch(array, bound / 2, min(bound, size - 1), value));
}
