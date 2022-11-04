#include "main.h"

int find_sqrt(int val, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @val: The number to find the square root of
 * @root:root value
 * Return: Return val conditionally
 */

int find_sqrt(int val, int root)
{
	if ((root * root) == val)
		return (root);

	if (root == val / 2)
		return (-1);

	return (find_sqrt(val, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input
 * Return: square root of the input
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
