#include  "lists.h"
/**
 * print_listint - function to print out nodes
 * @h: thepointer to the listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *k;
	size_t j = 0;
	int count = 0;

	k = h;

	while (k)
	{
		printf("%d\n", k->n);
		j++;
		k = k->next;
	}

	count = j;
	return (count);
}
