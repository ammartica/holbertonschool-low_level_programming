#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: start of linked list
 * @index: index of node that should be deleted, starts at 0
 *
 * Return: 1 if success or -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

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
