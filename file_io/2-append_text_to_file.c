#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - add text at the end file
 * @filename: text file
 * @text_content: the text add at the end in filename
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd;
	ssize_t n_write;

	if (!filename)
	return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
