#include "main.h"
/**
 *_islower - checks if arg is a lowercase char
 *
 * @c: int argument
 *
 * Return: 1 indicates lowercase, 0 indicates otherwise
 *
 */

int _islower(int c)
{
	if (c == 'a' || c < 'z' || c == 'z')
		return (1);
	else
		return (0);
}
