#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: list to be freed
 */

void free_listint(listint_t *head)

{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
