#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: value of the new node to be added
 * @n: element to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;
	return (node);
}
