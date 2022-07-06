#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * largest_number -> returns the largest of 3 numbers
 * @i: argument passed
 * Return: largest
 */

void positive_or_negative(int i);

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
#endif /* MAIN_H */
