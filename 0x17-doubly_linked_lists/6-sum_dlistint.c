#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: node pointer to the head of the list
 * Return: returns 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->next;
		head = head->next;
	}
	return (sum);
}
