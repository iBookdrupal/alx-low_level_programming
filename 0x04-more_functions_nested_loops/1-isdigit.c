#include "main.h"
/**
*_isdigit -> check for digit numbers
* @c: a character argument
* Return: 1 if the character is digit number and 0 otherwise
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
