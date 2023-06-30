#include "lists.h"
/**
 * add_node - adds  new node at the begging of alist_t
 * @head: it is the  data  tored in a the list
 * @str: the  character pointer that points  to data of  type char
 * Return: the address of the new element or NUll if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	int i = 0;

	int len = 0;

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

	new->str =  str_dup;
	new->len = len;
	new->next = *head;

		*head = new;
	return (new);
}
