#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digit numbers, followed by a new line
 * Description - numbers are of base 10, starting from 0
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + 48);
	}
	putchar('\n');
	return (0);
}
