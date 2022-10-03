#include <stdio.h>

/**
 * main - print arguments line by line
 * @argc: argument count
 * @argv: argument strings
 * Return: 0 indicates success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
