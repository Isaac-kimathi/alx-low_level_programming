#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string parameter
 * Return: void
 */
void rev_string(char *s)
{
	int e = 0;
	int f = 0;
	char tmp;

	while (s[e++])
		f++;
	for (e = f - 1; e >= f / 2; e--)
	{
		tmp = s[e];
		s[e] = s[e - f - 1];
		s[e - f - 1] = tmp;
	}
}

