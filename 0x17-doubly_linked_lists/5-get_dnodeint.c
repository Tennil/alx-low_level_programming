#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @index: the index of the node
 * @head: pointer to be used
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
