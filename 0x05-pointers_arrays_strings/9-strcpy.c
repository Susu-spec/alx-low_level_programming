#include "main.h"

/**
 * _strcpy - copies string from src to dest buffer
 * @src: pointer to string to be copied
 * @dest: pointer to buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while(*(str + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
