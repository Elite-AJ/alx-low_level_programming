#include "main.h"
/**
 * _abs -> computes the absolute value of an integer
 * @a: integer value
 * Return: Always 0
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
