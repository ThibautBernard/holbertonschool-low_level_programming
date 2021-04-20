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
 * search - search a value in a array
 * @array: array to check
 * @low: start to search
 * @tmp: occurence
 * @high: end to search
 * @value: the value to find
 * Return: The index if success or -1 if not
 */
int search(int *array, size_t low, int tmp, size_t high, int value)
{
	size_t mid;

	if (low < high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			tmp = mid;
		}
		if (array[mid] >= value)
			return (search(array, low, tmp, mid, value));
		else if (array[mid] < value)
			return (search(array, mid + 1, tmp, high, value));
	}
	if (tmp >= 0)
		return (tmp);
	printf("Searching in array: %d\n", array[high]);
	return (-1);

}

/**
 * advanced_binary - search a value in a array
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (search(array, 0, -1, size - 1, value));
}
