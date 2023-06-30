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

	int str_count = 0;

	int len_count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			str_count++;
		}
		if (h->len != '\0')
		{
			len_count++;
		}
		i = (len_count + str_count);
	}
	return (i);
}
