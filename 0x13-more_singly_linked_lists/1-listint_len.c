#include "lists.h"
/**
 * listint_len - finds the number of elements in a linked list
 * @h: pointer to the  lintsint_len
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	int len = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	len = i;
	return (len);
}
