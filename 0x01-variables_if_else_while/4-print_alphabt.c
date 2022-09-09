#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 */
int main(void)
{
	int al;

	do
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			putchar(al);
		}
	}while (al != 'q' || al != 'e');
	return (0);
}
