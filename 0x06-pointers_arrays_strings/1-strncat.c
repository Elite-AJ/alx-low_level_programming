#include "main.h"

/**
 * -strncat - concatenates two strings.
 *  @dest: copy to
 *  @src: copy from 
 *  @n: char 
 *  Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n &&  scr[j] != '\0')
	{
		dest[i] = src[j];
		return (dest);
	}

