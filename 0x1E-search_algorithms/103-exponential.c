#include "search_algos.h"

/**
 * xbinary_search - Searches for a value in a sorted array
 *             of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @lw: The starting index of the [sub]array to search.
 * @hgh: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *          Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int xbinary_search(int *array, size_t lw, size_t hgh, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (hgh >= lw)
	{
		printf("Searching in array: ");
		for (x = lw; x < hgh; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = lw + (hgh - lw) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			hgh = x - 1;
		else
			lw = x + 1;
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value in a sorted array of
 *  integers using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *        Otherwise, the index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, upp;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	upp = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, upp);
	return (xbinary_search(array, x / 2, upp, value));
}
