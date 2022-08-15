#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head:the first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *currentnode;

	currentnode = *head;

	if (*head == NULL)
		return;
	while (head != NULL)
	{
		tmp = currentnode->next;
		free(currentnode);
		currentnode = tmp;
	}

}
