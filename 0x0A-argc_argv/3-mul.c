#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiply argument strings
 * @argc: argument count
 * @argv: argument strings
 */

int main(int argc, char *argv[])
{
	int i, mul1, mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
	}

	printf("%i\n", mul1 * mul2);
	return (0);
}

