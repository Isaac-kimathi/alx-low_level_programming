#include <stdio.h>
/**
 * main - prints alphabet, followed by a new line
 * Description - prints alphabet in lower and uppercase
 * Return: 0 (sucess)
 */
int main(void)
{
	int n = 97;
	int i = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
