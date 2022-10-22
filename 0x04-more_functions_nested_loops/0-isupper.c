#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if input is in upper case
 * @c: any character inputted
 * Return: Returns 1 if c is uppercase else, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
