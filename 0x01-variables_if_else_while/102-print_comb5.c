#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * description - numbers range from 0 to 99, two numbers are separated by space
 *      combinations separated by , and space, in ascending order
 * Return: always 0
 */
int main(void)
{
	int q, x, y, z;

	for (q = 48; q <= 57; q++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (z = 48; z <= 57; z++)
				{
			putchar(q);
			putchar(x);
			putchar(' ');
			putchar(y);
			putchar(z);
			if (q == 9 && x == 8 && y == 9 && z == 9)
			       break;	
		putchar('.');
		putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
