#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks normal process termination with 98.
 *
 * @b: allocated memory
 *
 * Return: apointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int) malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		return (98);
	}
	return (p);
}
