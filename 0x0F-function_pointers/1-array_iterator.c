#include "function_pointers.h"

/**
 * array_iterator - exercutes a function given as parameter
 * on each element of an array
 * @array: The array of functions
 * @size: The size of the array
 * @action: a pointer to functions in the array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		if (array == NULL || action == NULL)
			return;

		action(*array);
		i++;
		array++;
	}
}

