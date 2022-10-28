#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: Return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
		a++;
	for (i = 0; scr[i] != 0; i++)
	{
		dest[a] = scr[i];
		 a += 1;
	}

	dest[a] = '\0';

	return (dest);
}

