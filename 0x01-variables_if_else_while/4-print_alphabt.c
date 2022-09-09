#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 */
int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		if (al == 'q' || al == 'e')
		continue;
		putchar(al);
		al++;
	}
	return (0);
}
