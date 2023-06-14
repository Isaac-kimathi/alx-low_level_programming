#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * description - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: string parameter1
 * @n: unsigned int parameter
 * @b: string parameter2
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);

}
