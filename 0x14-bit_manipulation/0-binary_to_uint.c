#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to units
 * @b: pointer to the char to be converted
 * Return: converted number if successful otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base = 1, len = 0;
	unsigned int res = 0;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}

	return (res);
}
