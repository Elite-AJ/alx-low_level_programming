#include " main.h"

/**
 * puts2 -print characters of a string with the first character,and a new line
 * @str: string value
 * Return: always 0
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
