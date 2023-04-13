#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive intagers
 * @argc: arrgument count
 * @argv: argument vector
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	char *v;
	sum = 0;


	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			j = strtol(argv[i], &v, 10);
			if (*v)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += j;
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}

