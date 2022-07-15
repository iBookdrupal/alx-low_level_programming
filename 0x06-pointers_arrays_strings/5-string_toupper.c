#include "main.h"
#include <ctype.h>
/**
* string_toupper - convert lower string to upper
* @a: number of elements of the array
* Return: 0 always successful
*
*/

char *string_toupper(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}


	return (a);
}
