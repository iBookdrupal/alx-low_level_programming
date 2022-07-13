#include "main.h"
/**
* print_rev - printing reverse string
* @s: string pointer
*/

void print_rev(char *s)
{
	char rev;
	int a, len, len1;

	len = 0; 
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (a = 0; a < len / 2; a++)
	{
		rev = s[a];
		s[a] = s[len1];
		s[len1--] = rev;
	}

}
