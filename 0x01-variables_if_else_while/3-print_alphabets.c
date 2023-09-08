#include <stdio.h>

/**
 * main - prints alphabet in lower and uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	purchar(ch);
}
putchar('\n');
return (0);
}
