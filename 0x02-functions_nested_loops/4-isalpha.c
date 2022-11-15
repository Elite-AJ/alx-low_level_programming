#include "main.h"

/**
 * _isalpha - checks for alphabetic chars
 * @c: char to be checked
 * Return: 1 or 0 conditionally
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
		       (c >= 'A' && c <= 'Z'));
}
