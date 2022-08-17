#include "lists.h"

/**
* pop_listint - pop an element
* @head: head of pointer
*
* Return: return a freed list of elements
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;

	n = temp->n;
	free(temp);

	return (n);
}

