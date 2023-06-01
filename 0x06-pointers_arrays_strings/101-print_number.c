#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		putchar('-');
		x = -n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	putchar((x % 10) + '0');
}
