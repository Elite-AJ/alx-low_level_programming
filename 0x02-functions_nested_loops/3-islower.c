#include "main.h"

/**
 * _islower -> prints 10 times the a
 * @c: any character
 * Return: returns 1 or 0 condirionally
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
