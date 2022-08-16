#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the first node of the list
 * @idx:is the index of the list where the new node should be added.
 * index starts at 0
 * Return: always o
 * @n: the node to be inserted
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = *head;
	unsigned int x;

	temp1->n = n;
	temp1->next = NULL;

	if (head == NULL)
		return (NULL);
	else if (idx == 0)
	{
		temp1->next = *head;
		*head = temp1;
		return (temp1);
	}
	else
	{
		listint_t *temp2 = *head;

		for (x = 0; x < idx - 1; x++)
		{
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
		return (temp1);
	}
}
