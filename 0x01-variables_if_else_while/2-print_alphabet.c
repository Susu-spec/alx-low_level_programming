#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char al;

	while (al <= 'z')
	{
		putchar("%i", al);
		al++;
	}
	return (0);
}
