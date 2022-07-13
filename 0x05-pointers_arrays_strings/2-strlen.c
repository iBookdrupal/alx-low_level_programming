/**
* _strlen - string function
* Return: 0 always return (success)
* @s: string parameter
*/

int _strlen(char *s)
{

	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}


	return (count);
}
