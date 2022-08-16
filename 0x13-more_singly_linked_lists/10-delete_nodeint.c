#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- deletes the node at index
 * @head: the first node
 * @index: index of the node that should be deleted.
 * Return: always 1 if it succeed and -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp1, *temp2 = *head;

	if (*head == NULL)
		return (-1);
	if (temp1 == NULL)
	{
		*head = temp1->next;
		temp1->next = NULL;
		free(temp1);
	}
	else
	{
		for (a = 0; a < index - 1; a++)
		{
			if (temp2->next == NULL)
				return (-1);
			temp2 = temp2->next;
		}

	}
}
