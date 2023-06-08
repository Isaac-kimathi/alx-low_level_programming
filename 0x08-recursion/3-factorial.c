#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer parameter
 * Return: 1 or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
