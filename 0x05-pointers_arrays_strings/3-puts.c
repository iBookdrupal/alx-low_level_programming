#include "main.h"

/**
* _puts - puts function
* @str: parameter accepting string
* Return: 0 always
*/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');


}
