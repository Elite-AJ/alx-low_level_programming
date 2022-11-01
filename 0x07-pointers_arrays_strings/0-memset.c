#include "main.h"

/**
 * *_memset - fill the first bytes of the memory area s with the constant
 * @s: char 1
 * @b: char 2
 * @n: input 1
 * Return: pointer (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

