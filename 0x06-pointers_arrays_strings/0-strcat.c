#include "main.h"

/**
 * _strcat - concatenate two string
 * @src: string 1
 * @dest: string 2
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int count, len = 0;

	while (dest[len])
		len++;
	for (count = 0; src[count] != '\0'; count++)
	{
		dest[len] = src[count];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
