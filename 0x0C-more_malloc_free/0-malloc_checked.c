#include "main.h"

/**
 * malloc_check - checks normal process termination with 98.
 *
 * @b: allocated memory
 *
 * Return: apointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
