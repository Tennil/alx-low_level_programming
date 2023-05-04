#include "main.h"

/**
* get_bit - gets value of binary at an index
* @n: the number to convert
* @index: the position to get
* Return: the value, -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
int base = 1;
int ans;

if (index > 32)
return (-1);
base = base << index;
ans = n & base;
if (ans > 0)
return (1);
return (0);
}
