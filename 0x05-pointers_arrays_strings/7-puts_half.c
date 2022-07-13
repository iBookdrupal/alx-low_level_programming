#include "main.h"

/**
* puts_half - prints half string in the function
* @str: half string parameter
*
*/

void puts_half(char *str)
{
	int i, length, num;

	length = 0;
	i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (num = (length - 1) / 2; num < length - 1; num++)
		{
			_putchar(str[num + 1]);
		}
	}

	_putchar('\n');
}
