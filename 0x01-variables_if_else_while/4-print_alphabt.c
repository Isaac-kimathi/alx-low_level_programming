#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Description - all letters printed except q & e
 * Return: always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
