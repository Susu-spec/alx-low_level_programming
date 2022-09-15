#include <stdio.h>

/**
 * main - causes an infinite loop
 * @while function - @i does not increment
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loopincoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinte loop avoided! \\o/\n");

	return (0);
}
