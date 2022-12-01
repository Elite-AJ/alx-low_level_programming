#include "lists.h"

/**
 * free_listint - free linked list
 * @head: pointer to head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = hea->next;
		free(head);
		head = tmp;
	}
}
