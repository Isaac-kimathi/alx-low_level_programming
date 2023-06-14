#include "main.h"

int _strlen(char *s);
/**
 * *str_concat - function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * Return: NUll on failure, or pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int n, size1, size2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size2 = _strlen(s2);
	size1 = _strlen(s1);
	x = malloc((size2 + size1) * sizeof(char) + 10);
	if (x == 0)
		return (0);

	for (n = 0; n <= size2 + size1; n++)
	{
		if (n < size1)
			x[n] = s1[n];
		else
			x[n] = s2[n - size1];
	}
	x[n] = '\0';
	return (x);
}

/**
 * _strlen - configues the length of a string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int size;

	size = 0;
	while (s[size] != 0)
		size++;
	return (size);
}

