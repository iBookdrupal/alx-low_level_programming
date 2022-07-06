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


void positive_or_negative(int i);

/**
* main - prints the largest of 3 integers
* Return: 0 always
*/
int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	return (0);
}
