#include "main.h"

#include <stdlib.h>

/**
 * str_concat - gets the  ends of input and add together for size
 *  @s1: input one
 *  @s2: input two
 *  Return: concatination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char concat;

	int i, j;

	i = j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));

			if (concat == '\0')
			{
			return (NULL);
			}

			i = ci = 0;

			while (s1[i] != '\0')

			{
				while (s1[i] != '\0')

					i++;
			}
			while (s2[ci] != '\0')

			{
				conct[i] = s2[j];

				i++, j++;
			}
			conct[i] = '\0';
			return (conct);

}
