#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 if success or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdw, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	while (text_content != NULL && text_content[len] != '\0')
		content++;

		fdw = write(fd, text_content, content_len);

	if (fdw == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
