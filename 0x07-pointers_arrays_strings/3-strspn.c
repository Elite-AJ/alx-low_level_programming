#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char 1
 * @accept: char 2
 * Return: Return bytes wrt (s) and (accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}
	return (i);
}
