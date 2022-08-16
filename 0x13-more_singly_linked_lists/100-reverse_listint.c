#include "lists.h"

/**
 * reverse_listint - reverses a string
 * @head: the first node of the list
 * Return: always 0
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
