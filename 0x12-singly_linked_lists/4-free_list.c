#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - free lists
* @head: pointer head
* Return: void
*/

void free_list(list_t *head);
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
