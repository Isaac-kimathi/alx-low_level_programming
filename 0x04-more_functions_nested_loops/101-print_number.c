#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int k, l;

	if (n != 0)
	{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	k = n / 10;
	l = n % 10;
	if (k != 0)
	{
		print_number(k);
		_putchar(l + 48);
	}
	else
		_putchar(l + 48);

	}
	else
	_putchar(48);
}
