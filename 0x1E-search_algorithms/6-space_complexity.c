#include <stdio.h>
#include <stdlib.h>

int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	size_t i = 0;
	for (; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}

	return (map);
}
