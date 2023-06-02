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
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
	       l++;
	}
	while (l < n)
	{
		dest[n] = '\0';
		l++;
	}

	return (dest);
}
