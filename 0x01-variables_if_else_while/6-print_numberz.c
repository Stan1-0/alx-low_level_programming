#include <stdio.h>
/**
 * main - program that prints all single digit
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int c;
for (c = 0; c < 10; c++)
{
	putchar(c + '0');
}
putchar('\n');
return (0);
}
