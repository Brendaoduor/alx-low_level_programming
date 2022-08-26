#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 if success or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

	if (fd == -1)
		return (-1);
	if (buffer == NULL)
	{
		open(text_content, O_CREAT);
	}

	r = read(fd, buffer, *text_content);
	w = write(STDOUT_FILENO, buffer, r);

	buffer[r] = '\0';
	free(buffer);
	close(fd);
	return (w);
}
