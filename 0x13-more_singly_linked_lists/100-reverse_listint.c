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

	if (head != NULL)
	{
		prev = *head;
		current = (*head)->next;
		*head = (*head)->next;
		prev->next = NULL;

		while (head != NULL)
		{
			*head = (*head)->next;
			current->next = prev;
			prev = current;
			current = *head;
		}
		*head = prev;
		return (0);
	}
}
