#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: node pointer to the head of the list
 * Return: returns 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
