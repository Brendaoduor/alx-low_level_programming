#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the first node of the list
 * Return: always 0
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h->str != NULL)
	{
		printf("%d\n", h->str)
		next++;
		h = h->next;
	}
	return (node);
}
