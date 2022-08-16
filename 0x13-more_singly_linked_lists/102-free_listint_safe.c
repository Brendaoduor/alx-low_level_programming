#include "lists.h"

/**
 * free_listint_safe- frees a list
 * @h: the first node of the list
 * Return: always 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int a;
	listint_t *temp1;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp1 = (*h)->next;
			*h = temp1;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
