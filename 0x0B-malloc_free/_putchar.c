#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c : the charcter to be printed
 *
 * Return: return 1 on success
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
