#include "main.h"
#include <ctype.h>
/**
* cap_string - capitalize every word
* @a: array of strings passed
* Return: 0 always successful
*
*/

char *cap_string(char *a)
{
	int i = 0, j = 0;
	char abc[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', ')', '(',
			'}', '{'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (a[i] == abc[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] -= 32;
				}
			}
		}

	}


	return (a);
}
