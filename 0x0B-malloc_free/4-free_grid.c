#include "main.h"
#include <stdlib.h>

/**
* free_grid - removing memory allocation
* @grid: width of the freed
* @height: height of the matrix
* Return: return nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
