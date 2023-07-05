#include "lists.h"
/**
 * reverse_listint -funtion that reverses a list
 * @head: it is a double pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt;
	listint_t *pre;
	listint_t *current;

	nxt = NULL;
	pre = NULL;
	current = *head;

	while (current)
	{
		nxt = current->next;
		current->next = pre;

		pre = current;
		current = nxt;

	}
	*head = pre;
	return (*head);
}
