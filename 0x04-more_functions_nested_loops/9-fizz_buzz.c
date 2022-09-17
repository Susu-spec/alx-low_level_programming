#include <stdio.h>
#include "main.h"
/**
 * main - print fizz, buzz, or fizzbuzz
 * Return: 0 indicates success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("Fizz Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			if (n == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

