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
		putchar("%c", al);
		al++;
	}
	return (0);
}
