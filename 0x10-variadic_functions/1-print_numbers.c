#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list qwt;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(qwt, n);
	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(qwt, int));
		if ((y != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(qwt);
	printf("\n");
}
