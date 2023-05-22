#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * description - separated by , followed by space, three digits are different
 *              smallest combinations in ascending order
 * Return: always 0
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (c < b)
					continue;
				if (b < a)
					continue;
				if (c == b)
					continue;
				if (b == a)
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
