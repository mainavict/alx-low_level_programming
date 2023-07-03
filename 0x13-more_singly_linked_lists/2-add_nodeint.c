#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: it is a pointer to he list
 * @n: it is the integer
 * Return: the address of the new element ,or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	
	listint_t *new;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
