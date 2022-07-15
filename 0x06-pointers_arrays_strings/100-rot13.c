#include "main.h"
/**
* rot13 - rotate the 13th character
* @s: leet parameter
* Return: nothing
*
*/

char *rot13(char *src)
{
	for (; *src; src++)
	{
		if ((*src > 'A' && *src < 'N') || (*src > 'a' && *src < 'n')) 
		*src += 13;
		else if ((*src > 'M' && *src < 'Z') || (*src > 'm' && *src < 'z')) 
		*src -= 13;
    }
	return (src);
}
