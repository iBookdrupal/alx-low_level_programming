#include <stdio.h>

/**
 * main - print to standard output
 * print using putchar 0-9
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
char rev = 'a';

	while (rev > 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');

	return (0);
}
