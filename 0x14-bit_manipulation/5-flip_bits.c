#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: interger to be used
 * @m: number to flip to
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;
	unsigned long int ans;
	int base = 1;
	unsigned long int i = 0;

	result = n ^ m;
	while (i < (sizeof(unsigned long int) * 8))
	{
		ans = result & base;
		if (ans > 0)
			count++;
		result = result >> 1;
		i++;
	}
	return (count);
}
