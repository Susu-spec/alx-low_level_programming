#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - calls the function 'f' with name as a parameter
 * @name: pointer to char array
 * @f: pointer to function which takes in a char pointer as argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
