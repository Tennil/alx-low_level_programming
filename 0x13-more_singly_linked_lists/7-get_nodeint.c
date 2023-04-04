#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of listint_t list
 * @head: first node of linked list
 * @index: index of the node
 *Return: NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		if (i == index)
			return (tmp);
		head = head->next;
		i++;
	}
	return (NULL);

}
