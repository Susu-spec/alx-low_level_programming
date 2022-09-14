#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: int argument
 *
 * Return: last digit variable
 */

int print_last_digit(int n)
{
	int l;

	l = (n % 10);
	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
