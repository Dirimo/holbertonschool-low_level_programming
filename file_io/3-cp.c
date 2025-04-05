#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits.
 * @message: The error message to print.
 * @exit_code: The exit code to use.
 * @fd_from: The file descriptor to close (if applicable).
 * @fd_to: The file descriptor to close (if applicable).
 * @filename: The filename to include in the error message (if applicable).
 */
void error_exit(char *message, int exit_code, int fd_from, int fd_to,
		char *filename)
{
	if (filename)
		dprintf(2, message, filename);
	else
		dprintf(2, message, fd_from);

	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit("Error: Can't write %s\n", 99, fd_from, fd_to,
					NULL);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read %s\n", 98, fd_from, fd_to, NULL);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: 0 on success, otherwise exit with an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_result;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read %s\n", 98, -1, -1, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to %s\n", 99, -1, -1, argv[2]);
	}

	copy_file(fd_from, fd_to);

	close_result = close(fd_from);
	if (close_result == -1)
		error_exit("Error: Can't close fd %d\n", 100, fd_from, -1, NULL);

	close_result = close(fd_to);
	if (close_result == -1)
		error_exit("Error: Can't close fd %d\n", 100, fd_to, -1, NULL);

	return (0);
}
