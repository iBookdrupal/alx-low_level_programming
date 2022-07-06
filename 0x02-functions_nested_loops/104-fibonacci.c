#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */

int main(void)
{
	int i;
	unsigned long int j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 98; i++)
	{
		next = j + k;
		if (i != 98)
		{
			_putchar(j, k);
			printf("%lu, ", next);
		}

		j = k;
		k = next;
		}

	printf("\n");
	return (0);
}
