#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers,
 *      from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, l;

	for (j = 0; j < 10; j++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
			_putchar((l / 10) + 48);
			_putchar((l % 10) + 48);
		}
	 _putchar('\n');
	}
}
