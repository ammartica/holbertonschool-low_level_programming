#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to start of list
 *
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
