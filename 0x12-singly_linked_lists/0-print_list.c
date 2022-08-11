#include "main.h"

/**
 * print_list -function that prints all the elements of a list_t list.
 * @h: the first node of the list
 * Return: always 0
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len h->str);
		next++;
		h = h->node;
	}
	return (node);
}
