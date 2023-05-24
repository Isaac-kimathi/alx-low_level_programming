#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * description - starts with 1 and 2, followed by a new line
 *             nos are separated by comma, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long gb1 = 0, gb2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = gb1 + gb2;
		putchar(sum);

		gb1 = gb2;
		gb2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
