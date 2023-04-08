#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: index to be used
 * @n: integer to be used
 * Return: 1 if works -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int = number;

	if (sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
		number &= ~(1UL << n);
		
		*n = number & *n;
	{
		return (1);
	}

}
