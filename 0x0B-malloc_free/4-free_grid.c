#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 demensional grid
 * @grid: array in input
 * @height: height of array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
