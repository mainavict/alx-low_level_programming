#include "lists.h"
/**
 * sum_listint - adds the data provided
 * @head: a pointer to  the  data
 * Return: the sum of all the data if no dat a is present return )
 */
int sum_listint(listint_t *head)
{
	int sum, num;

	sum = 0;

	while(head)
	{
		num = head->n;

		head = head->next;

		sum += num;
	}
	return (sum);
}
