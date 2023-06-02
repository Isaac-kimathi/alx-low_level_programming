#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * description - appends the src string to the dest string, overwriting the 
 *   terminating null byte (\0) at the end of dest, and then adds a 
 *  terminating null byte
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int h, i;

	h = 0;
	while (dest[h])
		h++;
	for (i = 0; src[i]; i++)
		dest[h++] = src[i];

	return (dest);
}
