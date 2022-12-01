#include "lists.h"

/**
 * sum_listint - sum all the data in a list
 * @head: head reference
 * Return: sum of all that and 0 if it doesn't exist
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
