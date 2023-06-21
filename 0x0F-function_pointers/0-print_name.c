#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - write a function that prints a name
 * @name: name of the person
 * @f: paramter for the function pointer
 * Return: has nothing to return
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
