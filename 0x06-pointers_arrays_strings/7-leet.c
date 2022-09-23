#include "main.h"
#include <string.h>

/**
 * leet - encodes string parameter into 1337
 * @x: string parameter
 * Return: string pointer
 */

char *leet(char *x)
{
	int a, b, c;

	char s[5] = {'A', 'E', 'O', 'T', 'L'};
	char str[5] = {'4', '3', '0', '7', '1'};

	a = 0;
	c = strlen(x);
	while (x[a])
	{
		b = 0;

		while (b < c)
		{
			if (x[a] == s[b] || x[a] - 32 == s[b])
				x[a] = str[b];
			b++;
		}
		a++;
	}

	return (x);
}
