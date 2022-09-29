#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: node that points the head of the list
 * @n: the node to be inserted
 * Return: returns the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (temp);
}
