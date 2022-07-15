#include "main.h"
/**
* leet - encone letters with numbers
* @s: leet parameter
* Return: nothing
*
*/

char *leet(char *s)
{
	int i = 0, j = 0;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
