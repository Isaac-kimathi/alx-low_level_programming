#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string parameter
 * Return: void
 */
void rev_string(char *s)
{
	int e, f, g;
	char temp;

	for (e = 0; s[e] != '\0'; e++)
		;

	f = 0;
	g = e / 2;

	while (g--)
	{
		temp = s[e - 1 - f];
		s[e - 1 - f] = s[e];
		s[e] = temp;
		f++;
	}
}

