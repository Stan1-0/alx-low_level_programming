#include <stdlib.h>
#include <time.h>
/**
 * main - print a random number
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%D is zero\n", n);
	return (0);
}
