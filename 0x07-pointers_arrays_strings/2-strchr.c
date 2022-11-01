#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer char
 * @c: char input
 * Return: s or 0 conditionally
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
