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

	for (c = 0; c < 100; c++)
	{
		for (n = 0; n < 100; n++)
		{

			if (c < n)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);

				if (c != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}

		}

	}

putchar('\n');
	return (0);
}
