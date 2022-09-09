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
	int AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		a++;
	}
	while(AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
