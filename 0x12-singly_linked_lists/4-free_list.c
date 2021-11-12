#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 *
 * Return: VOID
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;

	while (temp)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}

