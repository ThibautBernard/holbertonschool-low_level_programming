#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free array
 * @grid: 2d array
 * @height: column
 * Return: nothin
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
