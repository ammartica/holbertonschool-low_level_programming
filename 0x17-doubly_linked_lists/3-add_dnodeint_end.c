#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a linked dlistint_t list
 * @head: pointer to first node of list
 * @n: node to add to end of list
 *
 * Return: address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;

	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
