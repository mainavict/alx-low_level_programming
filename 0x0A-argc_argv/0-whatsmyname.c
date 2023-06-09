#include "main.h"
#include <stdio.h>

/**
 * main - the entry point
 * Description: prints the name of the program
 * @argc: counts number of command line arguement
 * @argv:   argument veector is a onedimentional array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
