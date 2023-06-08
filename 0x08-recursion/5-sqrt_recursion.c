#include "main.h"

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer parameter for square root
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - recurses to find the natural sqrt.
 * @n: integer parameter for calculation of sqrt
 * @x: integer parameter2 acting as a iterator
 * Return: square root
 */
int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}
