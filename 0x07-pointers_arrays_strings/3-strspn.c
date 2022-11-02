#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char 1
 * @accept: char 2
 * Return: Return bytes wrt (s) and (accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}

		else if (accept[index + 1] == '\0')
			return (a);
		}
	s++;
	}
	return ('\0');
}
