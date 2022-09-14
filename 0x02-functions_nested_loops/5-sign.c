#include "main.h"
/**
 * print_sign - prints sign based on if statement
 *
 * @n: int argument
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

