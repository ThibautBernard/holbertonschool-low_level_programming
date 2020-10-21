#include "function_pointers.h"
/**
 * array_iterator - print an array with pointer of function
 * @array: the array of int given to print
 * @size: Size of the array
 * @action: pointer of function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
