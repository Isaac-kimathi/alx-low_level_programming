#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of 
 * integers using the Jump search algorithm
 * array: array to search in
 * size: number of elements in array
 * value: the value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, sqb, trc, prv;
	if (!array || size == 0)
	       return -1;

	sqb = (int)sqrt((double)size);
	trc = 0;
	prv = idx = 0;

	do {
	       printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

	       if (array[idx] == value)
		       return (idx);
	       trc++;
	       prv = idx;
	       idx = trc * sqb;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prv, idx);
	
	for (; prv <= idx && prv < (int)size; prv++)
	{
		printf("value checked array[%d] = [%d]\n", prv, array[prv]);
		if (array[prv] == value)
			return (prv);
	}

	return (-1);
}
