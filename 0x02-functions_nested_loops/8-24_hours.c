#include "main.h"
/**
 * jack_bauer - print 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			for (k = j + 1; k < 6; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 9)
						continue;
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
