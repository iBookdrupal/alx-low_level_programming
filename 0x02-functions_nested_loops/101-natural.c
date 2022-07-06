#include <stdio.h>
#include "main.h"
/**
* print_sum_of_numbers -> printing sum of numbers
* Return: 0 always
*/

int print_sum_of_numbers(void)
{
	int sum3, sum5;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum3, sum5);

	return (0);
}
