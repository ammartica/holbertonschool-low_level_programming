#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list
 * @h: list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
