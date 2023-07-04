#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a double pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{

	while (head)
	{
		free(head);

		*head = NULL;
	}
}
