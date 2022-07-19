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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

		}
			if (!needle[j])
			{
				return (&haystack[j]);
			}
	}
		return (NULL);
}
