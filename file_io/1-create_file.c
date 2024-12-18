#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: text file create
 * @text_content: the text in filename file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd;
	ssize_t n_write;

	if (!filename)
	return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);
	if (text_content)
	{
	while (text_content[len])
	len++;
	n_write = write(fd, text_content, len);
	if (n_write == -1)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}
