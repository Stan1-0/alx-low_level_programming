#include "main.h"
/**
 * _isdigit - A function that checks for a digit
 * @c: parameter
 * Return: 1(digit) or 0(otherwise)
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
