#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer char
 * @c: char input
 * Return: s or 0 conditionally
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[index] == c)
			return (s + i);
	}

	return ('\0');
}
