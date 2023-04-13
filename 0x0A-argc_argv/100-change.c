#include <stdio.h>
#include <stdlib.h>

/**
 *  main - prints the minimum number of coins
 *  @argc: Argument count
 *  @argv: Array of pointers
 *  Return: 0 on Success or 1 on Error
 */
int main(int argc, char *argv[])
{
	int coins, changes;
	int cents[] = {25, 10, 5, 2, 1};

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	changes = atoi(argv[1]);

	while (changes > 0)
	{
		if (changes >= cents[0])
			changes -= cents[0];
		else if (changes >= cents[1])
			changes -= cents[1];
		else if (changes >= cents[2])
			changes -= cents[2];
		else if (changes >= cents[3])
			changes -= cents[3];
		else if (changes >= cents[4])
			changes -= cents[4];
		coins++;
	}
	printf("%d\n", coins);

	return (0);
}

