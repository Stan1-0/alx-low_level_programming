#include <stdio.h>

/**
 * main - program prints alphabet in lowercase
 *
 * Return: 0 (succesful)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
