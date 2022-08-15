#include "lists.h"

/**
 * listint_len -erturns the number of elements in a linked list.
 * @h: the first node of the list
 * Returnt: alway 0
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d", h->n);
		h = h->next;
	}
	return (node);
}
