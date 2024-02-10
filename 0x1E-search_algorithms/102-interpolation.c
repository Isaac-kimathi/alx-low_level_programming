#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lw, hgh;
	double x;

	if (array == NULL)
		return (-1);

	lw = 0;
	hgh = size -1;

	while (size)
	{
		x = (double)(hgh - lw) / (array[hgh] - array[lw]) * (value - array[lw]);
		pos = (size_t)(lw + x);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] < value)
			lw = pos + 1;
		else
			hgh = pos - 1;

		if (lw == hgh)
			break;
	}
	return (-1);
}
