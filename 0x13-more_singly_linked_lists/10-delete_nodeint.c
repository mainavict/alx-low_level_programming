#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head:  a double pointer
 * @index: the position of the  node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	unsigned int i;

	listint_t *pre;

	pre = *head;

		if (index != 0)
		{
			for (i = 0; i < index && pre != NULL; i++)
			{
				pre = pre->next;
			}
		}
		if (pre->next == NULL && index != 0)
			return (-1);
		if (pre == NULL)
			return (-1);

		next = pre->next;

		if (index == 0)
		{
			free(pre);
			*head = next;
		}
		else
		{
			pre->next = next->next;
			free(next);
		}
		return (1);
}
