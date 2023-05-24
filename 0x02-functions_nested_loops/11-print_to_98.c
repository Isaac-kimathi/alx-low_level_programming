#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 *    followed by a new line.
 *    numbers separated by a comma, and space, printed in order
 *    first printed no is one passed by function
 *    the last is 98
 * @n: integer/parameter
 * Result: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
	printf("%i, ", n);
	n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	printf("\n");
}
