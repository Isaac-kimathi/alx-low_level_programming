#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int w;

	w = 0;
	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		w = w * 2 + (*b++ - '0');
	}
	return (w);
}
