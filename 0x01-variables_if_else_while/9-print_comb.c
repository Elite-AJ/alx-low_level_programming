#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 30; n < 40; n++)
	{
		putchar(n + '0');
		if (n < 39)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
