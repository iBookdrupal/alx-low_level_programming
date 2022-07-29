#include "main.h"
#include <stdlib.h>

/**
* array_range - function that create an array range
* @min: minimum val.
* @max: maximum val size
* Return: newly created array of pointer
*/
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
