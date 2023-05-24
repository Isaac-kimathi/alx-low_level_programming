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
		_putchar(48);
		for (e = 1; e <= 9; e++)
		{
			_putchar (',');
			_putchar(' ');

			f = d * e;

			if (f <= 9)
				_putchar(' ');
			else
				_putchar((f / 10) + 48);
			_putchar((f % 10) + 48);
		}
	_putchar('\n');
	}
}
