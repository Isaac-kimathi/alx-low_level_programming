#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string parameter to be checked
 * @accept: string parameter to check for
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int y, x;

	for (n = 0; *(s + n) != '0'; n++)
	{
		x = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + n) == *(accept + y))
			{
				x = 0;
				break;
			}
		}
		if (x == 1)
			break;
	}
	return (n);
}
