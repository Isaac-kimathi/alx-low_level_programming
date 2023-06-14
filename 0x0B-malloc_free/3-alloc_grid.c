#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of
 *  integers
 * description: each element of the grid should be initialized to 0
 * @width: width of array(integer)
 * @height: height of array(integer)
 * Return: NULL, if weight or height is 0 or negative, else pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **mat, q, w;

	mat = malloc(sizeof(*mat) * height);
	if (width <= 0 || height <= 0 || mat == 0)
	{
		return (NULL);
	}
	else
	{
		for (q = 0; q < height; q++)
		{
			mat[q] = malloc(sizeof(**mat) * width);
			if (mat[q] == 0)
			{
				while (--q)
					free(mat[q]);
				free(mat);
				return (NULL);
			}
			for (w = 0; w < width; w++)
				mat[q][w] = 0;
		}
	}
	return (mat);
}
