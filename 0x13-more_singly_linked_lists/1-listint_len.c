#include "lists.h"
#include <stdio.h>

/**
 * listint_len -function that returns the no of elements in a linked list.
 * @h: linked list of listint_t list
 * Return: number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)

		printf("%d\n", h->n);
		number++;
		h = h->next;
		{
			return (number);
		}
}
