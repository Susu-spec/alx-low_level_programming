#include <stdio.h>
/**
 * main - entry point
 *
 * putchar - prints string
 *
 * Return: 1 indicates error
 *
 */
void write(char *str) 
{
	if (*str == '\0')
	return;
	write(str + 1);
	system ("echo *str");

}
int main(void)
{
	write("\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
