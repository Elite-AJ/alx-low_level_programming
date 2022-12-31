#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size of memory
 * Return: void (can be any data type)
 */

void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);

if (s == NULL)
exit(98);

return (s);
}
