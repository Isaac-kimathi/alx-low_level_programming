#include "main.h"
/**
 * flip_bits - a function that flip one number to another.
 * @n: the first int parameter
 * @m: the second int parameter
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, y ;
	unsigned long int diff, res;

	x = 0;
	res = 1;
	diff = n ^ m;
	y = 0;
	for (; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (res == (diff & res))
			x++;
		res <<= 1;
	}

	return (x);
}
