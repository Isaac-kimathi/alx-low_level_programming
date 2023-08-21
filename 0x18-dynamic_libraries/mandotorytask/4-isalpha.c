#include "main.h"
/**
 * _isalpha - functions that checks for alphabetic character
 * @c: character in the ASCII table
 * Return: 1 if a case if found or else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
