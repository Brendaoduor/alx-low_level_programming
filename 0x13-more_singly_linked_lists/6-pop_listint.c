#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  function that deletes the head node of a list
 * @head: the first node of the list
 * Return: always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (tmp);
}
