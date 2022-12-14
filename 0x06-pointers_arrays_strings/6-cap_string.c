#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize entire string
 * @x: string pointer
 * Return: converted string
 */
char *cap_string(char *x)
{
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' ', '	'};
	int n, i, len;

	n = 0;
	len = strlen(s);
	while (x[n])
	{
		i = 0;
		while (i < len)
		{
			if ((n == 0 || x[n - 1] == s[i]) && (x[n] >= 'a' && x[n] <= 'z'))
			{
				x[n] = x[n] - 32;
			}
			i++;
		}
		n++;
	}
	return (x);
}
