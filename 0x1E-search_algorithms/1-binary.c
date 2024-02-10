#include "search_algos.h"

/**
 * search_recursively - searches for a value in an array of
 *  integers using the Binary search algorithm recursively
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of number or -1 incase of failure
 */
int search_recursively(int *array, size_t size, int value)
{
	size_t mddl = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (mddl && size % 2 == 0)
		mddl--;

	if (value == array[mddl])
		return ((int)mddl);

	if (value < array[mddl])
		return (search_recursively(array, mddl, value));

	mddl++;

	return (search_recursively(array + mddl, size - mddl, value) + mddl);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = search_recursively(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
