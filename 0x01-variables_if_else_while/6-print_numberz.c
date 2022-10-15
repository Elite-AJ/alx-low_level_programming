#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int fig;

	for (fig = 0; fig < 10; fig++)
		putchar((fig % 10) + '0');

	putchar('\n');
	return (0);
}
