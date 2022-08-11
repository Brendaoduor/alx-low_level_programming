#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a node at the end of the linked list
 * @head: the first node of the list
 * @str: the new string to be added to the node
 * Return: always 0
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode;
	int len = 0;
	list_t *newnode = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
		return (NULL);
	while (str[len])
		len++;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head == newnode;
	return (*head);
	}
	else
	{
	list_t *lastnode = *head;

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	}
}
