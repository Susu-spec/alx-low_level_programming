#include <unistd.h>

/**
 * _putchar - print character
 * @c: character to print
 * return: character to print
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
