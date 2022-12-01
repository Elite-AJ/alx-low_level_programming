#include "lists.h"

/**
 * get_nodeint_at_index - get the nh node of listint_t
 * @head: head of the list
 * @index: position of the node
 * Return: the nth node of the list else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	if (index == 0 && head)
		return (head);

	for (p = 0; head && p < index; p++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}
