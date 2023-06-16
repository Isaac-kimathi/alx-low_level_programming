#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size:  size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int d;
	void *f;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		f = malloc(new_size);
		if (f == NULL)
			return (NULL);
		return (f);
	}
	if (new_size > old_size)
	{
		f = malloc(new_size);
		if (f == NULL)
			return (NULL);
		d = 0;
		for (; d < old_size && d < new_size; d++)
			*((char *)f + d) = *((char *)ptr + d);
		free(ptr);
	}

	return (f);
}
