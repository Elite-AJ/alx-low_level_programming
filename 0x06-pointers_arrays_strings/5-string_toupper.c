#include "main.h"

/**
 * *string_toupper - change lowercase letter to uppercase
 * @v: pointer option
 * Return: v
 */

char *string_toupper(char *v)
{
	int a;

	a = 0;
	while (v[a] != '\0')
	{
		if (v[a] >=  'a' && v[a] <= 'z')
			v[a] = v[a] - 32;
		a++;
	}
	return (v);
}
