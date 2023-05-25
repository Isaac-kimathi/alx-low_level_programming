#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -i;
		_putchar(45);
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
		_putchar('0' + (i % 10));
	}
}
