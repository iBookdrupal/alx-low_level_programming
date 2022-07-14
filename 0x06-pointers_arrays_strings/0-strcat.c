#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination to get a string to combine
* @src: source to concatenate the string
* Return: 0 always success
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	dest = '\0';

	return (0);
}
