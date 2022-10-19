#include "main.h"
/**
 * print_sign -> prints the sign of a number either +, - or 0
 * @n: any integer
 * Return: return either 1,0,-1 conditionally
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
