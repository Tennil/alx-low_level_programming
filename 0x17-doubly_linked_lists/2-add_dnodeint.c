#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @n: value of the new node to be added
 * @head: pointer to the first node
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

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
	*head = node;
	node->next = tmp;
	tmp->prev = node;
	return (node);
}
