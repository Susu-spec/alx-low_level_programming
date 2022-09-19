#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses string characters
 * @s: string parameter
 */

void rev_string(char *s)
{
	char temp, rev;
	int i, n;

	n = strlen(s);
	for (i = 0; i < (n / 2); i++)
	{
		temp = s[i];
		rev = s[n - i - 1];
		s[i] = rev;
		s[n - i - 1] = temp;
	}
}
