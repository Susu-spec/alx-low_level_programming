#include "main.h"
/**
 * main - entry point
 *
 * print_alphabet - prints alphabet
 *
 * Returns 0 indicates success
 *
 */

void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}
