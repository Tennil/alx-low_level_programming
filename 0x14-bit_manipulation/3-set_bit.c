#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: integer to be set
 * @index: is the index
 * Return: 1 if works and -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
		*n |= 1ul << index;

			return (1);
}
