#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * description - numbers range from 0 to 99, two numbers are separated by space
 *      combinations separated by , and space, in ascending order
 * Return: always 0
 */
int main(void)
{
	int q, x;

	for (q = 0 ; q <= 98; q++)
	{
		for (x = 1; x <= 99; x++)
		{
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (q == 98 && x == 99)
				break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
