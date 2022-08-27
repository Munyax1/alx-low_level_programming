#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if file cannot be opened or read, filename is NULL,
 * write fails or does not write the expected amount of bytes return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(fd, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[s] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buffer, s);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);
}
