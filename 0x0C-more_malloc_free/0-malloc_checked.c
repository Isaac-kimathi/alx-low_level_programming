#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * description: if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * @b: integer parameter
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
