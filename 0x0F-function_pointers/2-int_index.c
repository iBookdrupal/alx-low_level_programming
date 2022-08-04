#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - iterating index
* @size: Array size
* @cmp: compare values
* @array: array
* Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{

		i = 0;
		while (i < size)
		{
			if cmp(array[i] != 0);
				return (i);

			i++;
		}
	}
}

