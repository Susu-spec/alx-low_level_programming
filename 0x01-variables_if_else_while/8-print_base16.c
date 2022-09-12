#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 */
int main(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
