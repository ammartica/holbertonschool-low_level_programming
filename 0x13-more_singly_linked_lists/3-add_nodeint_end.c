#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a list
 * @head: start of list
 * @n: node to add
 *
 * Return: address of the new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	new->n = n;
	new->next = NULL;

	if (new == NULL)
		return (NULL);

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
