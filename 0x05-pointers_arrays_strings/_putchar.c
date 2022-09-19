#include <unistd.h>
#include "main.h"

int _putchar(char str)
{
	return (write(1, &str, 1));
}
