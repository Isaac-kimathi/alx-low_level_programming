#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string parameter to be checked
 * @accept: string parameter to check for
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[x] == '\0')
				return (x);
		}
	}
	return (x);
}
