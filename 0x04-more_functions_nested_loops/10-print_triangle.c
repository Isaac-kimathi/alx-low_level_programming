#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * description - if size is 0 or less, the function prints only a new line
 *      character # is used to print the triangle
 * @size: parameter for size
 * Return: void
 */
void print_triangle(int size)
{
	int bs, hgt;

	if  (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (bs = 1; bs <= size; bs++)
			{
				if ((hgt + bs) <= size)
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
