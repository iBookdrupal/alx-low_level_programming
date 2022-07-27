#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - prints a grid of integers
* @width: width of the string
* @height: height of the string
* Return: return width and height or 0 for failure
*/
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		free(ptr);
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = i; j > 0; j--)
			{
				free(ptr[j]);
			}
		}
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			ptr[k][l] = 0;
	}
	return (ptr);
}
