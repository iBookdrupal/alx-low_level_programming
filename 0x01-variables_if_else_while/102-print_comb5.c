#include <stdio.h>
/**
* main - print number combinations
* print possible combinations of 3 digits
* print comma
* Return: 0 if exited, compiled without errors
*
*/

int main(void)
{
	int c;
	int n;

	for (c = 48; c <= 57; c++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(c);
			putchar(n);

			if (c != 57 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}

	}

putchar('\n');
	return (0);
}
