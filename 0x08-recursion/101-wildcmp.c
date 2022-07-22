#include "main.h"

int _strcheck(char *s1, char *s2, char *c);
/**
* wildcmp - palidrome
* @s1: character string
* @s2: special character
* Return: number
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (_strcheck(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}



/**
* _strcheck - palidrome
* @s1: character string
* @s2: special character
* @c: for wild card
* Return: number
*/

int _strcheck(char *s1, char *s2, char *c)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (_strcheck(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (_strcheck(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (_strcheck(s1 + 1, s2 + 1, c));
	}
	else
	{
		return (_strcheck(s1 + 1, c, c));
	}

}
