#include "lists.h"

/**
 * sum_listint - sums all data of a linked list
 * @head: start of linked list
 *
 * Return: total sum of data in linked list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
