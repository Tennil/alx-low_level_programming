#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: index to be used
 * @n: integer to be used
 * Return: 1 if works -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  number;
	unsigned long int mask = 1;
	int poa;

	poa = *n;

	if (index > ((sizeof(unsigned long int) * 8)))
	{
		return (-1);
	}

	number = ~(mask << index);

	poa = poa & number;
	*n = poa;

	return (1);
}
