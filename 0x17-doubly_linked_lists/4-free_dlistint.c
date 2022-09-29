#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the node pointing to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;

	while (current_node->next != NULL)
	{
		free(current_node->prev);
		current_node = current_node->next;
	}
	free(current_node);
}
