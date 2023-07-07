#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bte = sizeof(n) * 8, fx = 0;

	while (bte)
	{
		if (n & 1l << --bte)
		{
			_putchar(49);
			fx++;
		}
		else if (fx)
			_putchar(48);
	}
	if (!fx)
		_putchar(48);
}
