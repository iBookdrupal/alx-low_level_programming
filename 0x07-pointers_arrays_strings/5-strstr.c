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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && (haystack != needle))
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
