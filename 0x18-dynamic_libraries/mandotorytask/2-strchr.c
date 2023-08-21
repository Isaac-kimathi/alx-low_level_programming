#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to check character
 * @c: character parameter
 * Return: null if character c is not found or pointer to the first occurrence
 * of the character c in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
