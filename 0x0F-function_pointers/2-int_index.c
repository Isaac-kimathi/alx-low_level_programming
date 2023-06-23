#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	while (x < size)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	x++;
	}
	return -1;
}
