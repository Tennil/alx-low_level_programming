#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: element to be add at the end
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *tmp = *head;

	add = malloc(sizeof(listint_t));
	if (!add)
	return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
	 *head = add;
	return (add);
	}

	while (tmp->next)
	tmp = tmp->next;

	tmp->next = add;

	return (add);
}

