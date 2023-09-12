#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *@c: character to be checked
 * Return: 1 or  0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
