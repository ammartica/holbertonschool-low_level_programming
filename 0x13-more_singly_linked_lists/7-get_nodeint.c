#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node of linked list
 * @head: start of linked list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
