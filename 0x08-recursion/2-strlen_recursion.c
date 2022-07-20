#include "main.h"
/**
* _strlen_recursion - string length in number
* @s: string parameter
* Return: integer
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	_putchar('\n');

}
