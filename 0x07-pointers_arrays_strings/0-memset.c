/**
* _memset -> memory set
* @s: pointer to the destination object
* @b: value to be filled
* @n: number of bytes to be filled starting from s to be filled.
* Return: s if successful
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);
}
