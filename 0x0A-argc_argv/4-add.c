#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str);
/**
 * main - multiply argument values
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 indicates success, 1 incdicates failure
 */

int main(int argc, char *argv[])
{
	int i, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			add += atoi(argv[i]);
		}
		else if (argc == 1)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%i\n", add);
	return (0);
}

int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if(!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}





