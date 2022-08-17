#include "lists.h"

/**
* print_listint - print list of elements
* @h: pointer
* Return: return list of elements
*/

size_t print_listint(const listint_t *h)
{
	int n;
	const listint_t *current;

	current = h;
	n = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}

return (n);
}

