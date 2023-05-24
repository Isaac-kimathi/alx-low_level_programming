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
	long int gb1, gb2, sum;

	gb1 = 1;
	gb2 = 2;
	printf("%lu, %lu", gb1, gb2);
	for (i = 0; i < 50; i++)
	{
		sum = gb1 + gb2;
		putchar(sum);
		gb1 = gb2;
		gb2 = sum;
	}
	printf("\n");
	return (0);
}
