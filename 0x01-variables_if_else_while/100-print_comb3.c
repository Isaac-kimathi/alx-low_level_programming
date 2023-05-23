#include <stdio.h>
/**
 * main - prints all possible different combinations of two numbers
 * Description - two digit are different, in an ascending order
 *               and smallest cominations
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int d;

	for (n = 48; n <= 57; n++)
	{
	for (d = 49; d <= 57; d++)
	{
		if (n > d)
			continue;
		if (n == d)
			continue;
		putchar(n);
		putchar(d);
		if (n == 56  && d == 57)
			break;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
