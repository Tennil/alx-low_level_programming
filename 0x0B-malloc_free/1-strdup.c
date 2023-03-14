#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
char *me;
int i, t = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
me = malloc(sizeof(char) * (i + 1));
if (me == NULL)
return (NULL);
for (t = 0; str[t]; t++)
me[t] = str[t];
return (me);
}
