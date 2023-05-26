#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *         ends with a \n,
 * Description: If n is 0 or less, the function should only print a \n
 *
 * @n: number of times the character \ should be printed
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
