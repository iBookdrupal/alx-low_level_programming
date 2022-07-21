#include "main.h"

int _strlen(char *s);
int palindrome_check(char *s, int start, int end);
int is_palindrome(char *s);


/**
* _strlen -> check string length
* @s: character string
* Return: number
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
* is_palindrome - check if a string is a palidrome
* @s: character string
* Return: 1 or 0 if success or not
*/
int is_palindrome(char *s)
{
	int n = _strlen(s);

	return (palindrome_check(s, 0, n - 1));
}


/**
* palindrome_check - check if a string is a palidrome
* @start: character string
* @end: length of the character
* @s: string to check for  palindrome
* Return: 1 or 0 if success or not
*/
int palindrome_check(char *s, int start, int end)
{
	if (end > 0)
	{
		if (s[start] == s[end])
		{
			return (palindrome_check(s, start + 1, end - 1));
		}
		else if (s[start] != s[end])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

	return (1);
}
