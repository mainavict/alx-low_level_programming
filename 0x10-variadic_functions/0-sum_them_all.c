#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of the given numbers
 * @n: inputparameters
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum = 0, i;

	va_start(numbers, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int n = va_arg(numbers, unsigned int);

		sum += n;
	}
	va_end(numbers);
	return (sum);
}
