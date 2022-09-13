#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*
* main - entry point
* 
* Return - 0 indicates success
*/

void print_alphabet_10x(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar("%c", c);
		}
		_putchar("\n");
	}
	return;
}

int main(void)
{
	print_alphabet_10x();
	return (0);
}

