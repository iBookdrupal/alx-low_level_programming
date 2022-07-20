#include "main.h"
/**
* _pow_recursion - raised to power with recursion
* @x: value of power x
* @y: value of base y
* Return: string
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
