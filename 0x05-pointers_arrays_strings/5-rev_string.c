#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string value
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len = 0, index = 0;

	char mp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		mp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = mp;
	}
}
