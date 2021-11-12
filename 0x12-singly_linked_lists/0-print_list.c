#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list of elements to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t i;

	temp = h;

	for (i = 0; temp; i++)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
