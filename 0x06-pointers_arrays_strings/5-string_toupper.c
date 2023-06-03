#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters of a
 *   string to uppercase
 * @b: string parameter
 * Return: string
 */
char *string_toupper(char *b)
{
	int g;

	for (g = 0; b[g] != '\0'; g++)
	{
		if (b[g] >= 97 && b[g] <= 122)
		{
			b[g] = b[g] - 32;
		}
	}
	return (b);
}
