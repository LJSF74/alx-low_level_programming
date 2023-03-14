#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fre_grid - frees mem allocated for grid in param
 * @grid: array
 * @height: size of arr
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
