#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - array interator
* @array: array
* @size: Array size
* @action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
			i++;
	}
}

