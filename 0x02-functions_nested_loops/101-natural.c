#include <stdio.h>
/**
 * main - prints natural numbers
 * description - the numbers are below 1024, and are multiples of 3 0r 5
 * Return: always 0
 */
int main(void)
{
	int d, i;

	for (d = 1; d < 1024; d++)
	{
		if ((d % 3) == 0 || (d % 5) == 0)
			i += d;
	}
	printf("%d\n", i);
	return (0);
}
