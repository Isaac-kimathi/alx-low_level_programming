#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string parameter
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
