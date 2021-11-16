#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: start of linked list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
