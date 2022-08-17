/**
* _putchar - print elements
* @c: parameter
* Return: 0 success always
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
