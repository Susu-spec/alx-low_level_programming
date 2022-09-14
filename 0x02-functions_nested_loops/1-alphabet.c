#include "main.h"
/**
 *main - entry point
 * 
 * print_alphabet - prints entire alphabet
 *
 * Return: 0 indicates success
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
