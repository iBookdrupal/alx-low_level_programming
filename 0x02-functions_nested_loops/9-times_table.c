#include "main.h"
/**
* times_table -> printing times table
*/

void times_table(void)
{
	int i, j, n;

	for (i =  0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);
		}
	}
}
