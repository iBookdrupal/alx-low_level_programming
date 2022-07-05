#include "main.h"
/*
* print_sign: print sign of a number
* @n: prints sign based on the value
* Return: 1 if greater than zero, 0 if equal to and -1 if less than 1
*
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
