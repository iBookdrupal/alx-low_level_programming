#include <stdio.h>

/**
* first - prints before the main method
* Return: 0 always
*/

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
