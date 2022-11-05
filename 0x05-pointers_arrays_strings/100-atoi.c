#include "main.h"
#include <stdio.h>

/**
 * _atoi - It  convert a string to an integer
 * @s: String value
 * Return: 0
 */

int _atoi(char *s)
{
	int j = 1;
	unsigned int num = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			j *= -1;
		if (*s == '+')
			j *= +1;
		s++;
	}
	return (num * j);
}
