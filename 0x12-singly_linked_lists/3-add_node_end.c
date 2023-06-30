#include "lists.h"
/**
 * add_node_end -  adds a node at the end of a list_t
 * @head: it is a pointer to the   head of a lit_t
 * @str: it is a chatcter ponyer to the  list _t
 * Return:the addreess of a new element other wise return NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	int len = 0;

	list_t *new;
	list_t *last;
	char *str_dup;

	new = malloc(sizeof(list_t));
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	else
		str_dup = strdup(str);
	while (str[i])
	{
		i++;
	}
	len = i;
	
	new->str = str_dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
