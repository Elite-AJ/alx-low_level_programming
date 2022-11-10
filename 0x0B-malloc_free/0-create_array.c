#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it
 * @size: number of array
 * @c: char value
 * Return: pointer location
 */

char *create_array(unsigned int size, char c)
{

	char *b;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		p = 0;

		while (p < size)
		{
			*(b + p) = c;
			p++;
		}
		return (b);
	}
}
