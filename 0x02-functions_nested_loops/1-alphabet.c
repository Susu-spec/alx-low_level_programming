#include "main.h"
/**
 * print_alphabet - function prototype
 *
 * main - entry point
 *
 * Reurn : 0 indicates success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar("%c", c);
	}
	_putchar("\n");
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}

