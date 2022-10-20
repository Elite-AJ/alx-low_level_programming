#include "main.h"
/**
 * print_last_digit -> Returns the value of the last digit
 * @b: number computed from which the last digit is extracted
 * Return: Always 0
 */
int print_last_digit(int b)
{
	int la;

	la = b % 10;

	if (la < 0)
	{
		la = la * -1;
	}
	_putchar(la + '0');
	return (la);
}
