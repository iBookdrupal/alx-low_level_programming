#include "lists.h"

/**
* sum_listint - sum of lists
* @head: head of pointer
*
* Return: return sum of the list
*/

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;

	}

return (add);
}

