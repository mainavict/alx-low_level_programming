#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int x, y, prod;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = (x * y);
	printf("%d\n", prod);
	return (0);
}

