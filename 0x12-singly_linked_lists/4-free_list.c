#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the linked list
 * @head: the first node of the list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (node != NULL)
	{
		head = node;
		node = head->next;
		head = node->str;
		free(head->str);
		free(head);
	}
}
