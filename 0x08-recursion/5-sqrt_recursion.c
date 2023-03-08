#include "main.h"

/**
 * assist - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int assist(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (assist(a, b + 1));

	return (1);
}

/**
 *  _sqrt_recursion-the natural square root of a number
 *
 *  @n: the number of square root
 *  Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (assist(n, 1));
}
