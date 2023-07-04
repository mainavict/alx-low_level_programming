#include "lists.h"
/**
 * insert_nodeint_at_index - a functiom that inserts a new node
 * @head: a double pointer
 * @idx: the index to where the new node is to be added
 * @n: the data that will be in the new node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current;

	current = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
	free(new);
	return (NULL);
	}
	else
	{
	new->n = n;
	}
	if (idx == 0)
	{
	new->next = *head;
	 * head = new;
	}
	else
	{
	new->next = current->next;
	current->next = new;
	}
	return (new);
}
