#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * @head: pointer to be used
 * Return: 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
