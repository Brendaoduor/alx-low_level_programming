#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - inserts node at the beginning of a list
 * @head: node that points to the head
 * @n: the node to be inserted
 * Return: returns the address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;
	(*head) = new_node;

	return (new_node);
}
