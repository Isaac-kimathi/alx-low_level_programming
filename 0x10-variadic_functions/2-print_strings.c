#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * description - If separator is NULL, don’t print it
 *    If one of the string is NULL, print (nil) instead
 *    Print a new line at the end of your function
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *c;
	int d = n;
	va_list rt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(rt, n);
	while (d--)
		printf("%s%s", (c = va_arg(rt, char *)) ? c : "(nil)",
				d ? (separator ? separator : "") : "\n");
	va_end(rt);
}
