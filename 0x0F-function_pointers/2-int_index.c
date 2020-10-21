#include "function_pointers.h"
/**
 * int_index - return index where is matched
 * @array: the array of int given to print
 * @size: Size of the array
 * @cmp: pointer of function that compare the array
 * Return: -1 or the index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			counter++;
			break;
		}
	}
	if (counter == 0)
		return (-1);
	return (i);
}
