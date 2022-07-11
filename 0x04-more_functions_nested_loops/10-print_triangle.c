#include "main.h"

/**
* print_triangle - check the code
* @size: size of the triangle
* Return: Always 0.
*/

void print_triangle(int size)
{
	int i, space, k = 0;

	for (i = 1; i <= size; ++i)
	{
		for (space = 1; space <= size - 1; ++space)
		{
			_putchar(' ');
		}

		while (k != 2 * i - 1)
		{
			_putchar(' ');
			_putchar('#');
			++k;
		}

		_putchar('\n');
	}
}
