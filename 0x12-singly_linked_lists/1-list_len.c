#include "lists.h"

/**
 * list_len - print all items of a linked lst
 * @h: head of the linked list
 * Return: elements count
 */

size_t list_len(const list_t *h)
{
	size_t count  = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
