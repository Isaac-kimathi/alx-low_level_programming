#include "main.h"
/**
 * print_times_table - prints the table
 * @n: times the table is to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int h, i, j;

	if (n > 0 || n <= 15)
	{
		for (h = 0; h <= 15; h++)
		{
			_putchar(48);
		for (i = 1; i <= 15; i++)
		{
			j = h * i;
			{
			_putchar(44);
			_putchar(32);
			if (j <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(j + 48);
			}
			else if (j <= 99)
			{
				_putchar(32);
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(((j / 10) % 10) + 48);
				_putchar((j % 10) + 48);
			}
			}
		}
		_putchar('\n');
		}
	}
}

