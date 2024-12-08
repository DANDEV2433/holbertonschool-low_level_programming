#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to the standard error and exits
 * @code: The exit code
 * @message: The error message
 * @filename: The name of the file causing the error
 */
void print_error(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
	}

/**
 * main - copy file to another file
 * @argc: the number of arguments
 * @argv: the arguments vector
 * Return: 0 on success, or error
 */
int main(int argc, char *argv[])
{
int file_from, file_to, n_read, n_write, n_close;
char buffer[BUFFER_SIZE];

	if (argc != 3)
	print_error(97, "Usage: cp file_from file_to\n", "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	print_error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (file_to == -1)
	print_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((n_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
	n_write = write(file_to, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (n_read == -1)
	print_error(98, "Error: Can't read from file %s\n", argv[1]);

	n_close = close(file_from);
	if (n_close  == -1)
	print_error(100, "Error: Can't close fd %d\n", argv[1]);

	n_close = close(file_to);
	if (n_close  == -1)
	print_error(100, "Error: Can't close fd %d\n", argv[2]);
	return (0);
}
