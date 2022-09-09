#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
