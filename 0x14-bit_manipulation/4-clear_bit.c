#include "main.h"

/**
* clear_bit - sets nth bit to 0
* @n: the number to convert
* @index: the position to switch
* Return: 1 success, -1 error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
int base = 1;
int num;

num = *n;
if (index > 32)
return (-1);
base = base << index;
base = ~base;
num = num & base;
*n = num;
return (1);
}
