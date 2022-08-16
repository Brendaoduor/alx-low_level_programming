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

	if (temp2 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}
	else
	{
		for (a = 0; a < index - 1; a++)
		{
			if (temp2->next == NULL)
				return (-1);
			temp2 = temp2->next;
		}
		temp1 = temp2->next;
		temp2->next = temp1->next;
		free(temp1);
		return (1);		

	}
}
