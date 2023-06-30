#include "lists.h"
/**
 * free_list - itis afunction that frees the memory covered ny a list_t
 * @head: the pointer to thelinklist
 * Return: nothin
 */
void free_list(list_t *head)
{
	list_t *new = head;
	list_t *next;

	while (head)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
