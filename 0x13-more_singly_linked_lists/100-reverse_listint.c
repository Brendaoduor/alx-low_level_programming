#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a string
 * @head: the first node of the list
 * Return: always 0
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = NULL;
	current = *head;
	while ((*head)->next != NULL)
	{
		prev = (*head)->next;
		(*head)->next = prev;
		current = *head;
		*head = prev;
	}
		(*head)->next = prev;
		return (*head);
}
