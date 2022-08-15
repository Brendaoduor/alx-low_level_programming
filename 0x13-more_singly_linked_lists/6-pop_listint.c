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
	int n;

	if (*head == NULL)
		return (0);		
	tmp = *head;
	n = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (n);
}
