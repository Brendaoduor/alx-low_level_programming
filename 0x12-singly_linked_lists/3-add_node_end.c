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
	list_t *lastnode, *newnode;
	int len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	while (str[len])
		len++;
	newnode->str = dup;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
	lastnode = *head;

	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	}
	return (*head);
}
