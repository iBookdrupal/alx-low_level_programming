#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - add element at the front
* @head: pointer head
* @str: string of elements
* Return: nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
