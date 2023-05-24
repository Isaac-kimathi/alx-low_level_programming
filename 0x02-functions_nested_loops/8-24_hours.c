#include "main.h"
/**
 * jack_bauer - function prints every minute of the day of Jack Bauer
 *             starting from 00:00 to 23:59
 * Return: time
 */
void jack_bauer(void)
{
	int e, f, g, h;

	for (e = 0; e <= 2; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			for (g = 0; g <= 5; g++)
			{
				for (h = 0; h <= 9; h++)
				{
					if (e >= 2 && f >= 4)
						break;
					_putchar(e + 48);
					_putchar(f + 48);
					_putchar(58);
					_putchar(g + 48);
					_putchar(h + 48);
					_putchar('\n');
				}
			}
		}
	}
}
