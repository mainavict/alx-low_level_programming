#include  "lists.h"
/**
 * print_listint - prints the elements of a listint_t
 * @h: thepointer to the listint_t
 * Returns: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}

	count = j;
	return (count);
}
