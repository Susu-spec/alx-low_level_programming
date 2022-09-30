#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name
 * Return: 0 indicates success
 */

int main(int argc, char *argv[])
{
	argc = 1;
	if (argc != 1)
	{
		printf("Error: Should include one command line argument\n");
		return (1);
	}

	printf("%s\n", argv[0]);
	return (0);
}
