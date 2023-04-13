#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * description: prints all arguments it receives
 * @argc: arguments count it counts the number of arguments
 * @argv: arguments vector it is a one dimentional array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
