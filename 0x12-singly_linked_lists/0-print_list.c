#include "main.h"

/**
 * print_list -function that prints all the elements of a list_t list.
 * @h: the first node of the list
 * Return: always 0
 */
size_t print_list(const list_t *h)
{
	struct list_t *next = h;

	while (str != NULL)
	{
		printf("%d\n", str->data);
		str = str->next;
	}
	else
		printf("[0]", (nil));
}
