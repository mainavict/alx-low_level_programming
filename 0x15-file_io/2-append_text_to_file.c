#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * Description: function that appends text at the end of a file
 *
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 exists. -1 does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		if (write(fd, text_content, strlen(text_content)) == (ssize_t) -1)
			return (-1);
	close(fd);
	return (1);
}
