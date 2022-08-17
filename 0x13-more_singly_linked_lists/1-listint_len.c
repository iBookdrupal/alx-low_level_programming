#include "lists.h"

/**
* listint_len - print length of elements
* @h: head of list
* Return: return length of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;


	while (current != NULL)
	{
		count += 1;
		current = current->next;
	}

	return (count);
}

