#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to fip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned  long int i;
	int count = 0;

	i = n ^ m;

	while (i)
	{
		count++;
		i &= (i - 1);
	}
	return (count);
}
