#include "main.h"
/**
*_isalpha-checks for alphaphet
*@c: Write a function that checks for alphabetic character.
*Return: 1 i fthe the character is a letter, 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
return (1);
else
return (0);
}
