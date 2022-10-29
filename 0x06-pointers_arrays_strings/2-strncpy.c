#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: input 1
 * @src: input 2
 * @n: integer
 * Return:  (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
