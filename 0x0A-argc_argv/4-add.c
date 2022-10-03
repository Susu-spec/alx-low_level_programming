#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply argument values
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 indicates success, 1 incdicates failure
 */

int main(int argc, char *argv[])
{
	int i, add, num;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < '0') || (*argv[i] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 1)
		{
			printf("0\n");
		}
		else
		{
			num = atoi(argv[i]);
			add += num;
		}
	}

	printf("%i\n", add);
	return (0);
}




