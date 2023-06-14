#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 *  created by your alloc_grid function
 * @grid: 2d array
 * @height: height of array(integer)
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int v;

	v = 0;
	while (v < height)
	{
		free(grid[v]);
		v++;
	}

	free(grid);
}
