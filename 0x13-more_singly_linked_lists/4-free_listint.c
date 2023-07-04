#include "lists.h"
/**
 * free_listint - fre the memory allocatedd
 * @head: a double pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
