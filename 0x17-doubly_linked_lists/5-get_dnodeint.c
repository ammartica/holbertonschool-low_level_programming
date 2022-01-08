#include "lists.h"

/**
 * get_dnodeint_at_index - finds nth node of a dlistint_t linked list
 * @head: pointer to start of list
 * @index: index of nth node to find
 *
 * Return: address of found node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
