#include "main.h"
/**
 * read_textfile - i is a functin that reads a text file
 * @filename: itis the name of the file to be reaed
 * @letters: the number of characters to be read fro the txt file
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd;
	ssize_t wrt;
	int opn;

	char *buffer;

	if (filename == NULL)
		return (0);
	if (letters == 0)
	{
		return (0);
	}
	else
	buffer = malloc(sizeof(char) * (letters));

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);

	}
	free(buffer);
	close(opn);

	return (wrt);
}
