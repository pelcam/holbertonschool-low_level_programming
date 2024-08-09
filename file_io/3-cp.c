#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exit with a code otherwise.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	copy_content(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * copy_content - Copies content from one file descriptor to another.
 * @fd_from: File descriptor for source file.
 * @fd_to: File descriptor for destination file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 */
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t n_read, n_written;

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor and checks for errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
