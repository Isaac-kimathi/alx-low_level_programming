#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Description - all letters printed except q & e
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 113 || i == 101)
		{
			continue;
			i++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
