#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 *
 * print_alphabet: 'Print lowercase alphabets'
 *
 * Return : ALways 0
 */
int void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
