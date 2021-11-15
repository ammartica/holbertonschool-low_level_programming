#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of list
 * @head: beginning of list
 * @n: node to add
 *
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
