#include "lists.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_node -function that adds a new node at the beginning of a list_t list.
 * @str: the string to be added to
 * @head:the first node of the list
 * Return: always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strdup;
	int len = 0;
	list_t *new_node;	

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup;
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
