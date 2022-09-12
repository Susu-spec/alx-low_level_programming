#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 *
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
