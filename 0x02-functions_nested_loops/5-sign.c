#include "main.h"
/*
* print_sign -> print sign of a number
* @n: argument to print sign based on the value
* @+: greater than zero
* @-: zero
* @-1: less than zero
* Return: 1 if greater than zero, 0 if equal to and -1 if less than 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
