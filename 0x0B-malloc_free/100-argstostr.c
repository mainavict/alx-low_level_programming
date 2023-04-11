#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer
 *  Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, p, x = 0, o = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (p = 0; av[i][p]; p++)
			o++;
	}
	o += ac;
	s = malloc(sizeof(char) * o + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)

	{
		for (p = 0; av[i][p]; p++)

	{
		s[x] = av[i][p];
		x++;
	}

		if (s[x] == '\0')


		{
			s[x++] = '\n';
		}
	}
	return (s);
}

