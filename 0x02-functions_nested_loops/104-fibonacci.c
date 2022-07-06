#include <stdio.h>
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

	j = 0;
	k = 1;

	for (i = 1; i <= 99; i++)
	{
		next = j + k;
		if (i != 99)
		{
			printf("%lu, ", next);
		}

		j = k;
		k = next;
		}

	printf("\n");
	return (0);
}
