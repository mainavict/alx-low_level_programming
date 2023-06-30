#include "lists.h"
/**
 * pre_main - prints a message before main function
 * Return: returns nothing
 */

void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
