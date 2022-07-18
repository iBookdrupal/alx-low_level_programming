/**
* _memcpy - memory coping
* @dest: pointer destination
* @src: pointer source of data
* @n: number of bytes to copy
* Return: return pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
