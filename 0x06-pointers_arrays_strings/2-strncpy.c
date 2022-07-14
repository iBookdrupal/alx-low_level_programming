/**
* _strncpy -> copying string files
* @dest: where the string will be copied
* @src: source from where to copy the string
* @n: size of the string dest
* Return: dest if successful
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
