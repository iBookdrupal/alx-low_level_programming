#include "main.h"

/**
* read_textfile - read a text file
* @filename: POSIX file name to read from
* @letters: letter size
* Return: 0 or 1
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	lenr = read(fd, buffer, letters);
	close(fd);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);
	return (lenw);
}
