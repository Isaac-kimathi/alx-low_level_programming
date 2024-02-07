#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: array to search
 * @size: size of array
 * value: value to search for
 * Return: always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0; 

	if (array == NULL)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return(i);
	}
	return (-1);
}
