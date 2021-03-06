#include "main.h"
/**
* _strcmp - comparing two strings
* @s1: parameter 1
* @s2: parameter 2 to comparison
* Return: return 0 if successful
*
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
