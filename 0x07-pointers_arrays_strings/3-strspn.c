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
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				n++;
			break;
			}
			else if (accept[y + 1] == '0')
				return (n);
		}
		s++;
	}
	return (n);
}
