#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random passwords
 * Return: random password
 */

int main(void)
{
	char c;
	int a;

	srand(time(0));
	while (a <= 2645)
	{
		c = rand() % 128;
		a += c;
		putchar(a);
	}
	putchar(2772 - a);

	return (0);
}
