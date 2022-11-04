#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: interger input
 * Return: Factorial value
 */

int factorial(int n)
{
	int value = n;

	if (n < 0)
		return (-1);

	else if (n == 0 && n >= 1)
		return (1);
	value *= factorial(n - 1);

	return (value);
}
