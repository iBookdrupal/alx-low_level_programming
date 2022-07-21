#include "main.h"
/**
* _sqrt_recursion - square root
* @n: value of base y
* @i: iteration number
* Return: square root of a number
*/

int root_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root_recursion(n, 0));
}


/**
* root_recursion - square root
* @n: integer number
* @i: iteration of the number
* Return: square root of a number
*/

int root_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (root_recursion(n, i + 1));

}
