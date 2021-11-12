#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *temp;

	temp = h;

	for (i = 0; temp; i++)
		temp = temp->next;

	return (i);
}
