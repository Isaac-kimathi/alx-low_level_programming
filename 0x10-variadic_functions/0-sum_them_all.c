#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of arguments
 * @...: the integer sum
 *
 * Return: always (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = n, sum = 0;
	va_list spf;

	if (!n)
		return (0);

	va_start(spf, n);
	while (x--)
		sum += va_arg(spf, int);
	va_end(spf);

	return (sum);
}
