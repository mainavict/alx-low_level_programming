#include "main.h"

/**
 *  _puts_recursion - print a string
 *  @s:sting
 *  Return:void
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	_putchar(' \n ');
		
}

