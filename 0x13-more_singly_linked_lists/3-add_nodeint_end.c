#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: the first node of the list
 * @n: the data in the list
 * Return: alwasy 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;

if (*head == NULL)
	*head = newnode;
else
{
	listint_t *lastnode = *head;

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
}
return (*head)
}
