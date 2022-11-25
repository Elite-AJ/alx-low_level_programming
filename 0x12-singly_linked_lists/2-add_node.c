#include "lists.h"

/**
 * add_node - add node to the beggining of the linked list
 * @head: pointed referencing the head of the linked list
 * @str: pointer of the string been added to the node
 * Return: address of the new element or NULL CONDITIONALLY
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_mode->next = *head;
	*head = new_node;

	return (new_node);
}
