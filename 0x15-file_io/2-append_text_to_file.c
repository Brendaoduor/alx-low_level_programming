#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to be appended or added
 * Return: returns 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t len = strlen(text_content)
		ssize_t ret = write(fd, text_content, len);

		if (ret != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
		return (1);
}
