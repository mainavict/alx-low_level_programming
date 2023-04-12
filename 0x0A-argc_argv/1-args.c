#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints number of command line arguements
 * @argc: argument count -number of arguements
 * @argv: argument vector a one dimentional array of arguemnts
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
