#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: char val
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(!name || !f)
		return;
	f(name);
}