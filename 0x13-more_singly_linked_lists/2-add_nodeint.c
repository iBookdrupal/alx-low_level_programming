#include "lists.h"

/**
* add_nodeint - add node at the beginning
* @head: head of list
* @n: number count
*
* Return: return length of elements
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));


	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}

