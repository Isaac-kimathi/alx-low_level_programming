#include "main.h"
/**
 * main - prints alphabet 10 times, in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int d;
	int i;

	for (d = 0; d <= 9; d++)
	{
		for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}
}
