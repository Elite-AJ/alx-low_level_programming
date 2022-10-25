#include "main.h"
/**
 * *_strcpy - copies the string pointed by src, with the terminating null byte
 * @dest: pointer 1
 * @src: pointer 2
 * Return: pointer referring to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do{
		i++;
		dest[i] =  src[i];
	} while (src[i] != '\0');
	
	return (dest);
}
