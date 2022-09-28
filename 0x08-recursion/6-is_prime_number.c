#include "main.h"
/**
 * is_prime_number - check if input is a prime number
 * @n: integer
 * Return: 1 if prime number, 0 if not
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n % i == 0)
		return (0);
	else
		return (1);
}
