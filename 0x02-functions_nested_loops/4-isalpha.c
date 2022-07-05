#include "main.h"
/**
* _isalpha -> checks for alphabetic characters either capital or lowercase
* @c: argument for checking the condition
* Return: 1 if true or 0 otherwise
*
*/


int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
