#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: 2d array of int types
 * @size: size of array (square)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int q, sz1, sz2;

	sz1 = 0;
	sz2 = 0;

	q = 0;
	while (q < size)
	{
		sz1 += a[q];
		sz2 += a[size - q - 1];
		a += size;
	q++;
	}
	printf("%d, ", sz1);
	printf("%d\n", sz2);
}
