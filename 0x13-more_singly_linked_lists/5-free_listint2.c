#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointers to the linklist_t to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
		*head = NULL;
}
