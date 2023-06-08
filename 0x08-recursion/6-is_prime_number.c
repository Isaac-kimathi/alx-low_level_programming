#include "main.h"

/**
 * is_prime_number - tests whether input integer is a prime number
 * @n: integer input parameter
 * Return: if a prime number return 1, else 0
 */
int _prime(int n, int y);
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

#include "main.h"
/**
 * _prime - recursion prime number calculation
 * @n: integer parameter1
 * @y: integer parameter for calculation
 * Return: 1 if n is a prime number, 0 if not
 */
int _prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n <= 1 || n % y == 0)
		return (0);
	else
		return (_prime(n, y + 1));
}
