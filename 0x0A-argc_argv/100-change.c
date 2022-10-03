#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_quarters(int cents);
int get_dimes(int cents);
int get_nickels(int cents);
int get_twos(int cents);
int get_pennies(int cents);

/**
 * main - prints minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 indicates success, 1 indicates failure
 */

int main(int argc, char *argv[])
{
	int cents, dimes, quarters, pennies, twos, nickels, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	quarters = get_quarters(cents);
	cents = cents - quarters * 25;

	dimes = get_dimes(cents);
	cents = cents - dimes * 10;

	nickels = get_nickels(cents);
	cents = cents - nickels * 5;

	twos = get_twos(cents);
	cents = cents - twos * 2;

	pennies = get_pennies(cents);
	cents = cents - pennies * 1;

	coins = quarters + dimes + nickels + twos + pennies;
	printf("%i\n", coins);

	return (0);
}

/**
 * get_quarters - calculates number of quarters to give customer
 * @cents: number of cents
 * Return: quarters
 */
int get_quarters(int cents)
{
	int quarters;

	quarters = 0;
	while (cents >= 25)
	{
		cents = cents - 25;
		quarters++;
	}

	return (quarters);
}

/**
 * get_dimes - calculates number of dimes
 * @cents: number of cents
 * Return: dimes
 */

int get_dimes(int cents)
{
	int dimes;

	dimes = 0;
	while (cents >= 10)
	{
		cents = cents - 10;
		dimes++;
	}

	return (dimes);
}

/**
 * get_nickels - calculate nickels
 * @cents: number of cents
 * Return: nickels
 */

int get_nickels(int cents)
{
	int nickels;

	nickels = 0;
	while (cents >= 5)
	{
		cents = cents - 5;
		nickels++;
	}
	return (nickels);
}

/**
 * get_twos - calculate twos
 * @cents: number of cents
 * Return: twos
 */

int get_twos(int cents)
{
	int twos;

	twos = 0;
	while (cents >= 2)
	{
		cents = cents - 2;
		twos++;
	}

	return (twos);
}
/**
 * get_pennies - calculate number of pennies
 * @cents: number of cents
 * Return: pennies
 */

int get_pennies(int cents)
{
	int pennies;

	pennies = 0;
	while (cents >= 1)
	{
		cents = cents - 1;
		pennies++;
	}

	return (pennies);
}

