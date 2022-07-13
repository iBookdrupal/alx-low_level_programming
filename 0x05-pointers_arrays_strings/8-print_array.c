#include "main.h"
#include <stdio.h>
/**
* print_array - prints array of numbers
* Return: 0 always return (success)
* @a: pointer
* @n: integer value parameter
*/
void print_array(int *a, int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
