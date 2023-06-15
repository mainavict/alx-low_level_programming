#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = ((char *) malloc((len1 + n + 1) * (sizeof(char))));
			if (ptr == NULL)
			{
			return (NULL);
			}
			strncpy(ptr, s1, len1);
			strncat(ptr + len1, s2, n);
			return (ptr);
			}
