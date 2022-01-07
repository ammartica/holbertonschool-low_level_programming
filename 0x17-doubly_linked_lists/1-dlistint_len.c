#include "lists.h"

/**
 * dlistint_len - returns numbers of elements in a linked dlistint_t list
 * @h: pointer to head of linked list
 *
 * Return: total elements in linked dlistint_t int
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}
