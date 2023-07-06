#include "main.h"
/**
 * get_bit - gets the value of a given  bit index
 * @n: the number to provide the bits
 * @index: the idex t be  retrived
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		i = n >> index;
	}
	return (i & 1);
}
