#include"main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of each element
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *l;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = malloc(nmemb * size);
	if (l == NULL)
		return (NULL);
	n = 0;
	for (; n < (nmemb * size); n++)
		l[n] = 0;

	return (l);
}
