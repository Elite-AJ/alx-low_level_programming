#include "main.h"
/**
 * times_table- Prints out the 9 times table
 * Return - no return
 */
void times_table(void)
{
	int c, d, pp;

	for (c = 0; c <= 9; c++)
	{
		_putchar(48);
		for (d = 1; d <= 9; b++)
		{
			pp = c * d;
			_putchar(44);
			-putchar(32);

			if (pp <= 9)
			{
				_putchar(32);
				-putchar(pp + 48);
			}
			else
			{
				_putchar((pp / 10) + 48);
				_putchar((pp % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
