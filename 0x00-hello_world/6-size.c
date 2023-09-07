#include <stdio.h>
/**
 * main - This program prints the size of various datatypes
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of a long long is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
