#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the node head to the pointer
 * Return: returns the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
int length = 0;

while (h != NULL)
{
	h = h->next;
	length++;
}
return (length);
}
