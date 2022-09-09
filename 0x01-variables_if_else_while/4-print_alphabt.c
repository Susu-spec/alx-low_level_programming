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
		putchar(al);
		al++;
		if (al == 'q' || al == 'e')
		{
			continue;
		}
	}
	return (0);
}
