#include "main.h"
/**
 * _abs - print absolute value
 *
 * @n: int argument
 *
 * Return:  absolute value
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);
	else
		return (n * -1);
}
