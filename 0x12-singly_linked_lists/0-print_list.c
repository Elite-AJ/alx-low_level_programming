#include "lists.h"

/**
 * print_list: prints all the elements of a list_t list
 * @n: input
 *
 * Return: number of Nodes
 */

size_t print_list(const list_t *h)
{
	int m = 0;

	while (w)
	{
		if (w->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", w->len, w->str);
		m++;
		w = h->next;
	}
	return (m);
}
