#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * return: void
 */
void times_table(void)
{
	int d, e, f;

	for (d = 0; d <= 9; d++)
	{
		for (e = 0; e <= 9; e++)
		{
			f = d * e;
			if (e == 0)
			_putchar('0' + f);
			else if (f < 10)
			{
			_putchar(' ');
			_putchar('0' + f);
			}
			else
			{
			_putchar('0' + f / 10);
			_putchar('0' + f % 10);
			}
			_putchar (',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
