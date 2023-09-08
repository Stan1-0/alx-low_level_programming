#include <stdio.h>
/**
 * main - prints all the numbers of the base 16
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char i;
for (i = '0'; i <= '16'; i++)
{
	putchar(i + '0');
}
putchar('\n');
return (0);
}
