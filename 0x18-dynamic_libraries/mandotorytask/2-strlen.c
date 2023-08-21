#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string input parameter
 * Return: int
 */
int _strlen(char *s)
{
	int lngstr;

	for (lngstr = 0; *s != '\0'; s++)
		lngstr++;

	return (lngstr);
}
