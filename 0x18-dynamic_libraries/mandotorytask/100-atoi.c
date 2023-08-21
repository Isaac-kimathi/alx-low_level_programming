#include "main.h"
/**
 * _atoi- function that convert a string to an integer
 * description - take into account all the - and + signs before the number
 * @s: string parameter
 * Return: 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	unsigned int no = 0;
	int z = 1;

	do {
		if (*s == '-')
			z *= -1;
		else if (*s >= '0' && *s <= '9')
			no = (no * 10) + (*s - '0');
		else if (no > 0)
			break;
	} while (*s++);

	return (no * z);
}

