#include "main.h"
#include <stdio.h>

/**
 * int _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: Returns 1 if c is a digit, 0 otherwis
 */

int _isdigit(int c)
{
	if ( c >= 0 && c <= 9);
	{
		return (1);
	}
	else
	{
		return (0);
	}
}