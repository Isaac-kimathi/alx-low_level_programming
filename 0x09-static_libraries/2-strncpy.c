#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @src: string to be copied and pasted
 * @dest: string to be updated
 * @n: number of bytes of src used
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
