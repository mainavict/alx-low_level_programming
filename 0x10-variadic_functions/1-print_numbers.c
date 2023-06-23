#include "variadic_functions.h"
/**
 * print_numbers - prints number given
 * @separator: prints the seperater beween  numbers
 * @n: number  of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		num = (va_arg(lst, unsigned int));
				printf("%d", num);
				if (separator != NULL && i < n - 1)
				{
				printf("%s", separator);
				}

	}
	printf("\n");
	}
