#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * description - character # used to print a square
 *     if size is 0 or less, the function prints only a new line
 * @size: parameter for size of square
 * Return: void
 */
void print_square(int size)
{
	int q, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (q = 0; q < size; q++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
