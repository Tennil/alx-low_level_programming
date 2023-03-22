#include "3-calc.h"

/**
 * op_add - function that add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fuction that subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies
 * @a: first integer
 * @b: second integer
 * Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a / b);
}

/**
 * op_mod - function that give modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of two integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
