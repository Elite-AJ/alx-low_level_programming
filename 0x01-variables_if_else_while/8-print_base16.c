#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int fig;
	char leng;

	for (fig = 0; fig < 10; fig++)
		putchar((fig % 10) + '0');

	for (leng = 'a'; leng <= 'f'; leng++)
		putchar(leng);

	putchar("\n");

	return (0);
}
