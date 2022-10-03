#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed
 * @argc: total number of arguments
 * @argv: string arguments
 * Return: 0 indicates success, 1 indicates failure
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%i\n", (argc - 1));
	return (0);
}
