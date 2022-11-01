#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char 1
 * @accept: char 2
 * Return: Return bytes wrt (s) and (accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		c = 1;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}

		if (c == 1)
			break;
		i++;
	}
	return (1);
}
