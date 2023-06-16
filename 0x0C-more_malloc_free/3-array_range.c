#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: starting point
 * @max: max point
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *S;
	int x, q;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	S = malloc(sizeof(int) * x);
	if (!S)
		return (NULL);
	for (q = 0; q < x; q++)
		S[q] = min++;

	return (S);
}
