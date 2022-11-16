#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function's parameter on each element of an array
 * @array: char val
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
