#include <stdio.h>

/**
 * main - print to standard output
 * print lower case base 16 numbers '0-9' and alphabet 'a-f'
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{

		putchar(num);
		if (num != '9')
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	}


	putchar('\n');

	return (0);
}
