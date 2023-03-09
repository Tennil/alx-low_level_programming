#include "main.h"

/**
* prime_find- calculate and checkse for fro prime numbers
* @n: the number to check
* @dvdr: the number we use to divide n
* Return: 1 if prime, 0 if not prime
*/
int prime_find(int n, int dvdr)
{
	if ((n % dvdr) == 0)
		return (0);
	if (dvdr == (n / 2))
		return (1);
	return (prime_find(n, dvdr + 1));
}

/**
* is_prime_number- checks whether a number is prime
* @n: the number it recieves
* Return: 1 if n is prime , 0 if not prime
*/
int is_prime_number(int n)
{
	int dvdr = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);

	return (prime_find(n, dvdr));
}
