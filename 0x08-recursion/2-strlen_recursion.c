#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string parameter
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s > '\0')
	{
		num += _strlen_recursion(s + 1) + 1; 
	}
	return (num);
}
