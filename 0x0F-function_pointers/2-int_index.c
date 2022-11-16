#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: int val
 * @size: int val 2
 * @cmp: int val 3
 *
 * Return: Return index 0 or -1 conditionally
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
