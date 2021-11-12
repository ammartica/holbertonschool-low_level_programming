#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node at the end of a list
 * @head: beginning of list
 * @str: data to add at the end
 *
 * Return: address of the new element of NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *tmp;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
