#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 *@head: points to the first node
 *@idx:  the index of the list where the new node should be added
 *@n: data to insert
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *tmp = *head;

		node = malloc(sizeof(listint_t));

	if (!node || !head)
		return (NULL);

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = n;
	new->next = NULL;
	for (i = 0; tmp && i < idx; i++)
	{
	if (i == idx - 1)
	{
	node->next = tmp->next;
	tmp->next = node;
	return (node);
	{
	return (NULL);
	}

}

