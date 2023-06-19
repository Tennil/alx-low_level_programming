#include "main.h"
/**
* _islower-Entry
* @c: Write a function that checks for lowercase character
* Return:1 if the letter is lowercase and 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
