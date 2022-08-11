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
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
	*head == newnode;
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
