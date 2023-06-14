#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src: pointer to string
 * @dest: pointer to the buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y++] = '\0';
	return (dest);
}
