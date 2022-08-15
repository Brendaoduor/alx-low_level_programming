#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: the first node of the list
 * Return: always 0
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (sum_listint(head->next) + head->n);
}
