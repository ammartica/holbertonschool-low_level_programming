#include "lists.h"

/**
 * listint_len - iterates through elements of a linked list
 * @h: list to iterate through
 *
 * Return: total elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
