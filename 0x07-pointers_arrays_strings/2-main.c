#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello";
char *x;

x = _strchr(s, 'l');

if (x != NULL)
{
printf("%s\n", x);
}
return (0);
}
