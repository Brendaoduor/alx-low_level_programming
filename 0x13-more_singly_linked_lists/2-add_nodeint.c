#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - inserts node at the beginning on the list
i * @n: the data in the list
 * @head: the first node int the list
 * Return: always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
