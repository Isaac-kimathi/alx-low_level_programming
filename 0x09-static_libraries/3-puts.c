#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line,
 *
 * @str: a parameter to prints
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
