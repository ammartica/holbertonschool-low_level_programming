#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a linked list
 * @head: pointer to start of linked list
 * @index: node that should be deleted
 *
 * Return: 1 if SUCCESS or -1 if FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
