#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char lg;

	for (lg = 'z'; lg >= 'a'; lg--)
		putchar(lg);

	putchar('\n');

	return (0);
}
