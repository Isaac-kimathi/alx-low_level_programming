#include "main.h"
/**
 * _memcpy - function that copies memory area
 * description - function copies n bytes from memory area src
 * to memory area dest
 * @dest: memory area to be copied to
 * @src: source of n bytes
 * @n: no of src bytes to be copied
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
