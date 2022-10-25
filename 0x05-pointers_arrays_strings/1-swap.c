#include "main.h"
/**
 * swap_int - swaps values
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;

	*b = x;
}
