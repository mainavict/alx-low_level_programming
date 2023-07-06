#include "main.h"
/**
 * binary_to_uint -  a function that converts
 * @b: the binary to be covated
 * Return: the converted  number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = strlen(b);
	int i = 0;

	while (b)
	{

for (i = 0; i < len; i++)
{
	if (b[i] == '1')
	{
		decimal = (decimal << 1) | 1;
	}
	else if (b[i] == '0')
	{
		decimal = (decimal << 1);
	}
	else
		b = NULL;
}
}
return (decimal);
}
