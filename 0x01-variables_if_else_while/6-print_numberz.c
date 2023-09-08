#include <stdio.h>
/**
 * main - program that prints all single digit
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char i;
for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
