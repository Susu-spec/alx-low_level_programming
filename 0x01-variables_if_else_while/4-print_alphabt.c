#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 */
int main(void)
{
	int al;

	while (al <= 'z')
	{
		if (al == 'q' || al == 'e')
		{
			al++;
		}
		putchar(al);
		al++;
	}
	return (0);
}
