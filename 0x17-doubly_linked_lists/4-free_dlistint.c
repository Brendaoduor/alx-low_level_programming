#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the node pointing to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
