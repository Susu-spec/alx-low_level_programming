#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/**
 * main - entry point
 *
 * Return: 0 before exiting function
 *
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%i is a negative number\n", n);
	}
	else if (n > 0)
	{
		printf("%i is a positive number\n", n);
	}
	else
		printf("%i is zero\n", n);
	return (0);

}
