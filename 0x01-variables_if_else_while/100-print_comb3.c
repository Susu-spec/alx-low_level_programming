#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicates success
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
