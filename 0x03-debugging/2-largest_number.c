#include <stdio.h>
#include "main.h"

/**
* largest_number - checking for largest number
* @a: first integer
* @b: second integer
* @c: third integer
* Return: 0, largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}


