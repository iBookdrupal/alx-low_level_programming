#include "main.h"
/**
* print_alphabet_x10 -> prints lowercase in 10 lines
*
*/

void print_alphabet_x10(void)
{
	int i; 
	int j;
	for (i = 1; i <=10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
