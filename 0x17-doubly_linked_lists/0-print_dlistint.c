#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint list
 * @h: the pointer to the head node
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node++;
}
return (node);
}
