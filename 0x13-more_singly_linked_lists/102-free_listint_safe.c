#include "lists.h"
#include <stdlib.h>

/**
 * _ra -relocates memory of an array pointer
 * @size: size of the list to be appended to
 * @new: the new node to add to the list
 * @list: the old list
 * Return: always 0
 */
listint_t **_ra(listint_t **list, size_t size, const listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe- frees a list
 * @h: the first node of the list
 * Return: always 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);
	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}
