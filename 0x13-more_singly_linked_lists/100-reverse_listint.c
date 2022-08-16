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
	listint_t *prev, *current, *next;

	prev = NULL;
	current = *head;
	while (head != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
		return (prev);
}
