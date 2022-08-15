#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
