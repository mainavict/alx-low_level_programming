#include "lists.h"
/**
 * pop_listint - it delets  node
 * @head: it is double pointer
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int delnode;
	listint_t *j;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	delnode = current->n;

	j = current->next;

	free(current);

	*head = j;

	return (delnode);
}
