#include "main.h"

/**
 * recursion  - returns the square root of an input recursively
 * @n: square root
 * @k: square
 * Return: -1indicating error
 */

int recursion(int k, int n)
{
	if (k * k > n)
		return (-1);
	else if (k * k == n)
		return (k);
	else
		return (recursion(k + 1, n));
}

/**
 * _sqrt_recursion - return the square root
 * @n: root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
	{
		return (recursion(1, n));
	}

}
