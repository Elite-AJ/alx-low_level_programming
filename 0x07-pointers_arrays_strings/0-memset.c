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
	unsigned char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);
}

