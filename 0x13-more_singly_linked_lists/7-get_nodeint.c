#include "lists.h"

/**
* get_nodeint_at_index - get the node
* @head: head of pointer
* @index: node index
*
* Return: return a freed list of elements
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
	return (NULL);

return (head);
}

