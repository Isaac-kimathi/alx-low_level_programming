#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 * Description - printed in lowercase, followed by new line
 * Return: 0 (success)
 */
int main(void)
{
	int d;
	int i;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
