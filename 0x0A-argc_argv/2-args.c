#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counts arguments
 * @argv: arguments array
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int count = 0;

	while (count--)

	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
