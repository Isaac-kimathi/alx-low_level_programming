#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * description - function use at most n bytes from src; and
 *    src does not need to be null-terminated if it contains n or more bytes
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most no of bytes from address of src
 * Return: &dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x])
		x++;
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';

	return (dest);
}
