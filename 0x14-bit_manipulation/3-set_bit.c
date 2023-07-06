#include "main.h"
/**
 *  set_bit - sets value of a bit  to one
 *  @n: decimal number passsed
 *  @index: the position
 *  Return: 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;

	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	(*n) = (*n) | num;
	return (1);


}
