#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * description - function should print the second half of the string
 *          If the number of characters is odd,
 *          the function prints the last n characters of the string,
 *          where n = (length_of_the_string - 1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int n, g;

	n = 0;
	while (str[n] != '\0')
		n++;

	g = n / 2;
	if (n % 2 == 1)
		g++;
	while (g < n)
	{
		putchar(str[g]);
		g++;
	}
	putchar('\n');
}
