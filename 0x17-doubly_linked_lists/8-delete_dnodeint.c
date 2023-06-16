#include "lists.h"

/**
 * delete_dnodeint_at_index -  function that deletes the node at index
 * @index: index of the node that should be deleted
 * @head: pointer
 * Return: 1 if  it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp && count < index - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp != NULL)




