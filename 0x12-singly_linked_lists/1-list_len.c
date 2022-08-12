#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* list_len - prints the length of a list
* @h: pointer
* Return: nodes
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
