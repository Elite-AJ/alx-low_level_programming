#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @num: The number to be checked
 * @div: The divisor
 * Return: Return values conditionally
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (num == div / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
