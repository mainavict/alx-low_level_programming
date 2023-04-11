#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - it duplicates to new memory space location
 * @str: cha
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i, r;

	i = 0;
	r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == (NULL))
	{
		return (NULL);
	}

	for (r = 0; r <= i; r++)
		a[r] = str[r];

	return (a);
}
