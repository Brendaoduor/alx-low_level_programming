#include "lists.h"

/**
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp1, *temp2 = *head;

	if (*head == NULL)
		return (-1);
	if
