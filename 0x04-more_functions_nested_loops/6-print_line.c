#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * description - the line should end with a \n
 * @n: is the number of times the character _ should be printed
 * Return: if n is 0, only \n is printed, else line
 */
void print_line(int n)
{
	int d;

	for (d = 0; d <= n; d++)
	{
		if (d == 0)
			continue;
		_putchar(95);
	}
	_putchar('\n');
}
