#include "lists.h"

/**
* insert_nodeint_at_index - inserting node at any index
* @idx: index to insert
* @n: number of list
* @head: head of pointer
*
* Return: return node list where inserted
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
		return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
