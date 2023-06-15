#include "lists.h"

/**
 * free_dlistint - function that frees
 * @head: list to be freed.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
