#include "lists.h"

/**
 * listint_len -returns the number of elements in a linked list.
 * @h: the first node of the list
 * Return: always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
