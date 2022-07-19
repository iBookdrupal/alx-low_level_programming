#include <stdio.h>
#include "main.h"
/**
* _strstr -> find first occurence of substring
* @haystack: pointer
* @needle: pointer to return first occurrence
* Return: c for the first occurnce
*/

char *_strstr(char *haystack, char *needle)
{
	int flag = 0;

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && (haystack != needle))
		{
			return (haystack);
			flag = 1;
		}

		haystack++;
	}

	if (flag == 1)
	{
		return (haystack);
	}
	else
	{
		return (NULL);
	}
}
