#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string
 * Return: converted number or 0 if one or more chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int add = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			add = add * 2 + (*b - '0');
			b++;
		}
	}
	return (add);
}
