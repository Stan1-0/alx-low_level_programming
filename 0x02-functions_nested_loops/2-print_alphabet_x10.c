#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	int a ;

	while(counter++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

		_putchar(10);
	}
}
