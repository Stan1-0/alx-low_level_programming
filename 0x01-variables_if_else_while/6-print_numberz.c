#include <stdio.h>
/**
 * main - program that prints all single digit
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
