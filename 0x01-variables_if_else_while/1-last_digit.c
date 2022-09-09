#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 success
 *
 * exit function
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l;

	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	}
	else
		printf("Last digit of %i is %i and is 0\n", n, l);
	return (0);
}
