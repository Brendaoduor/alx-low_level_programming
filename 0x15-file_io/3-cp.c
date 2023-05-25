#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fontl.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>

/**
 * main - Program that copies the content of a file to another file
 * @argc: argument constant
 * @argv: argument vector
 * Return: 0 on success
 */

int maii(int argc, char **argv)
{
	int fd_from, fd_to, bytes_written, bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Short write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	exit(0);
}
