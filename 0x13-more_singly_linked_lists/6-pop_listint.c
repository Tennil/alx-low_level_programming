#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t.
 * @head: points to the first element
 * Return: deleted element.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
