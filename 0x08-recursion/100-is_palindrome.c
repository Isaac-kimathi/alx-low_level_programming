#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - tests whether a string is a palindrome
 * @s: string parameter
 * Return: 1 incase it's a palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - returns the length of a string
 * @s: string parameter to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _pal - tests the characters recursively for palindrome
 * @s: string parameter
 * @d: integer parameter
 * @lng: length of the string
 * Return: 1 if palindrome, else 0
 */
int _pal(char *s, int d, int lng)
{
	if (*(s + d) != *(s + lng - 1))
		return (0);
	if (d >= lng)
		return (1);
	return (_pal(s, d + 1, lng - 1));
}
