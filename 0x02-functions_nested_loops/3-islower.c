#include "main.h"
/**
*_islower -> check for lowercase character
* @c: a character argument
* Return: 1 if the character is lower case and 0 otherwise
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
