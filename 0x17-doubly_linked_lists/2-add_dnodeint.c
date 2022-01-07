#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of linked dlistint_t list
 * @head: pointer to first node
 * @n: value of the new node
 *
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
