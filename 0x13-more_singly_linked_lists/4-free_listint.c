#include "lists.h"

/**
* free_listint - free elements
* @head: head of pointer
* Return: return a freed list of elements
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}

