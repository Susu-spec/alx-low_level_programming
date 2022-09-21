#include "main.h"

int _strlen(char *dest);
char *_strcpy(char *dest, char *src);
/**
 * _strcat - concatenate two string
 * @src: string 1
 * @dest: string 2
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int count;

	count = _strlen(dest);
	dest = dest + count;
	dest = _strcpy(dest, src);

	return (dest);
}

/**
 * _strlen - returns length of string
 * @dest: string parameter
 * Return: length of string
 */

int _strlen(char *dest)
{
	int count = 0;

	while (*dest != '\0')
	{
		count++;
		dest++;
	}

	return (count);
}

/**
 * _strcpy - copies src string to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (saved);
}

