#include "main.h"

/**
 * _sqrt_recursion - find the squreroot of a number
 *
 * @n : is the  number to be squred
 *
 * Return: (i * (_sqrt_recursion(n)))
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (i * (_sqrt_recursion(n)));
	}
}
