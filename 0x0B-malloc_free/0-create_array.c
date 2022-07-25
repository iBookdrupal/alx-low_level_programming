#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - create an array of chars
* @size: number of size
* @c: character
* Return: *pointer
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = (char *) malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	if (!t)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;


	return (t);
}
