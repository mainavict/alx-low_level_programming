#include "lists.h"
/**
 * list_len -  prints ount the number of elements printed
 * @list_t:
 * @h: it the a poiter to the list_t
 * Return:the  number of elements ina linked list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	i = len;
	return (i);
}
