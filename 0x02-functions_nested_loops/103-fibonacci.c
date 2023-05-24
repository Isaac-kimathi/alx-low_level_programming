#include <stdio.h>

/**
 * main - Prints the add of the even-valued fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int l1, l2, ls, als;

	l1 = 1;
	l2 = 2;
	ls = als = 0;
	while (ls <= 4000000)
	{
		ls = l1 + l2;
		l1 = l2;
		l2 = ls;
		if ((n1 % 2) == 0)
		{
			als += l1;
		}
	}
	printf("%ld\n", als);
	return (0);
}
