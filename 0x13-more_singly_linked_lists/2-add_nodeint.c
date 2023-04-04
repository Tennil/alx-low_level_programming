#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @n: new node to be added
 * @head: poiter to the first node
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)

	return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
		return (node);
}
