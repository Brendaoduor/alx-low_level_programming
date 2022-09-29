#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: node pointer to the head of the list
 * @index: the index node to be returned
 * Return: returns null if index does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
