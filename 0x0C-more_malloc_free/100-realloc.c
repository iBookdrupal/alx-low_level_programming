#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocate memory
* @ptr: pointer
* @old_size: old memory size
* @new_size: new memory size
* Return: 0 for success
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);

	optr = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			nptr[i] = optr[i];
			i++;
		}
	}
	free(ptr);
	return (nptr);
}
