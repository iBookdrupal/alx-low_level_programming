#include <stdio.h>
#include "main.h"
/**
* print_diagsums -> sum of the two diagonals of a square matrix of integers.
* @a: array pointer
* @size: array size
* Return: 0 always successful
*/

void print_diagsums(int *a, int size)
{
	int i, t_size;
	unsigned int sumD1, sumD2;

	t_size = 0;
	sumD1 = 0;
	sumD2 = 0;

	t_size = (size * size) - 1;


	for (i = 0; i <= t_size; i = i + (size + 1))
	{
		sumD1 = sumD1 + a[i];
	}

	for (i = (size - 1); i <= t_size; i = i + (size + 1))
	{
		sumD2 = sumD2 + a[i];
	}

	printf("%d, %d\n", sumD1, sumD2);
}
