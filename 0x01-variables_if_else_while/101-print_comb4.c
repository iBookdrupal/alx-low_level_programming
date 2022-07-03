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
	int zero_ten;
	int zero_one;
	int one_hun;



	for (one_hun = '0'; one_hun <= '9'; one_hun++)
	{
		for (zero_ten = (one_hun + 1); zero_ten <= '9'; zero_ten++)
		{
			for (zero_one = (zero_ten + 1); zero_one <= '9'; zero_one++)
			{
				putchar(one_hun);
				putchar(zero_ten);
				putchar(zero_one);

				if (zero_ten != '8' || zero_one != '9' || one_hun != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}


	return (0);
}
