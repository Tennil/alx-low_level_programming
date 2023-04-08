#include "main.h"

/**
 *  get_bit - function that returns the value of a bit at a given index
 *  @index: starting from 0 of the bit you want to get
 *  @n: integer used
 *  Return: value at index or -1 if errr occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (1);
	}

	else
	{
		return ((n >> index) &  1);
	}
}
