#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n:  number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, c;

	n = (n - 1);
	c = 0;
	while (c <= n)
	{
		b = a[c];
		a[c++] = a[n];
		a[n--] = b;
	}
}
