#include "variadic_functions.h"

/**
 *  print_strings - it prints strings given
 *  @separator: inputs a comma between the stings
 *  @n: irs is the number of strings expected
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *string = (va_arg(list, char *));

		if (string == NULL)
		{
			printf("nil");
		}
		else
		printf("%s", string);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
