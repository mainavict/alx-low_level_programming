#include "main.h"
/**
 * create_file - a function tht creates a file
 * @filename: the name to the new file
 * @text_content: whats inside the text
 * Return: i on success
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == 1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	if (write(i, text_content, len) == (ssize_t) -1)
	{
		return (-1);
	}
	close(i);
	return (1);
}
