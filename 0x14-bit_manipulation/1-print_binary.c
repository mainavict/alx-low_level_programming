#include  "main.h"
/**
 * print_binary - prints out te binary form of a number
 * @n: the number to beconverted to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int binary = n;
	int i = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 0; binary >>= 1; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
