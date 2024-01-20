#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free memory
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: clear memory
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}

