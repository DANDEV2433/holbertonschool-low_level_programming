#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints
 * @filename: text file
 * @letters: the number of letters it should read and print
 * Return: the number of letters and printed, or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t n_read, n_write;

	if (!filename)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
	close(fd);
	return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	free(buffer);
	close(fd);
	return (n_write);
}
