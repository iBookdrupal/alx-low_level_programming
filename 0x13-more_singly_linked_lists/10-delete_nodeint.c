#include "lists.h"

/**
* delete_nodeint_at_index - delete node at any index
* @index: index to insert
* @head: head of pointer
*
* Return: return node list where inserted
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *copy, *temp = *head;


	if (copy == NULL)
	return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
		return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
