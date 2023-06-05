#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * description - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: string occurrence to be search
 * @accept: string to check string s
 * Return: Null if no byte found or a pointer to the byte in that matches
 * one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\0');
}
