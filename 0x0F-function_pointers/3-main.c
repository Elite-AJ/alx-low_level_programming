#include "3-calc.h"

/**
 * main - Entry point
 * @argc: num of arg
 * @argv: arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, total;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_to_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o = '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	total = func(arg1, arg2);

	printf("%d\n", total);

	return (0);
}
