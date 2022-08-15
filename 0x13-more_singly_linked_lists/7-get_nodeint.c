#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the first node of the list
 * @index: the node to be returned
 * Return: always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
