#include "main.h"

/**
 *  _print_rev_recursion - print a string in reverse
 *   @s: string
 *   Return 0;
 */

void _print_rev_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
