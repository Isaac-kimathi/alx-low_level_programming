#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 *  each element of an array
 * @array: the int array
 * @size: size of an array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t d;

	while (d < size)
	{
		action(*array++);
		d++;
	}

}
