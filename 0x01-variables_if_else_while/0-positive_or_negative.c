#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random num
 *
 * Return: 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%dis positive\n", n);
		else if (n < 0)
			printf("%dis negative\n", n);
		else
			printf("%dis zero\n", n);
		return (0);
}
