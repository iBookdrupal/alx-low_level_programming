/**
* _strcpy -> copying string files
* @dest: where the string will be copied
* @src: source from where to copy the string
* Return: 0 always
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
