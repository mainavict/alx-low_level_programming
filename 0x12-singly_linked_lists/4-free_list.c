#include "lists.h"
/**
 * free_list - itis afunction that frees the memory covered ny a list_t
 * @head: the pointer to thelinklist
 * Return: nothin
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);

		head = new;
	}
}
