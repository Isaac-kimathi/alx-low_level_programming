#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: array to search
 * @size: size of an array
 * @value: value to search for
 * Return: index containing `value`, or -1 if `value` not found or `array` is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int lwr = 0, mddl, hghr = size - 1;
	int i;

	if (array == NULL)
	{
		return(-1);
	}

	while (lwr <= hghr)
	{
		mddl = (lwr + hghr) / 2;
		printf("searching in array: ");
		for (i = lwr; i <= hghr; i++)
			printf("%i%s", array[i], i == hghr ? "\n" : ", ");
		if (array[mddl] < value)
			lwr = mddl + 1;
		else if (array[mddl] > value)
			hghr = mddl - 1;
		else
			return(mddl);
	}
	return(-1);
}
