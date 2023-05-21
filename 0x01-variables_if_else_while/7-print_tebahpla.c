#include <stdio.h>
/**
 * main - prints alphabet, followed by a new line
 * Description - alphabet is in lowercase and reverse
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n <= 97)
	{
		putchar(n);
		--n;
	}
	putchar('\n');
	return (0);
}
