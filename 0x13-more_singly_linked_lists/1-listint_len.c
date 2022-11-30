#include "lists.h"

/**
 * listint_len - counts the number of elements in listint_t
 * @h: pointer to the head of the list
 * Return: The num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}
	return (count);
}
