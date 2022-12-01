#include "lists.h"

/**
 * pop_listint - deletes the head of the node of listint_t
 * @head: haed reference
 * Return: head node data if successful, 0 if empty
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	res = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (res);
}
