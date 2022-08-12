#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - add node element at the end
* @head: pointer head
* @str: string of elements
* Return: nodes
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		return (new_node);
	}
}
