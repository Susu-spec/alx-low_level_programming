#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: 1 indicates error
 *
 */

int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
