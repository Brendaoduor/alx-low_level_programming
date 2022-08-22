#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the file to be read
 * @letters: the letters to be read and printed
 * Return: always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if  (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (r == -1 || w == -1)
	{
		free(buff);
		return (0);
	}
	buff[r] = '\0';
	free(buff);
	close(fd);
	return (w);
}
