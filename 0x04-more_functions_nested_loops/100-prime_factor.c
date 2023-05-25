#include "main.h"
/**
 * main - program that finds and prints the largest prime factor of
 *  the number 612852475143, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
