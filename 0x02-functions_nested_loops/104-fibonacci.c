#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 *       starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int e = 1;
	long int f = 2;
	int g = 0;

	printf("%ld, %ld, ", e, f);
	while (g < 42)
	{
		e = e + f;
		printf("%ld, ", e);
		f = f + e;
		printf("%ld, ", f);
		g++;
	}
	return (0);
}
