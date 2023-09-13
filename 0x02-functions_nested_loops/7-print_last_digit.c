#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number taken
 * Return: 0 (successful)
 */
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
