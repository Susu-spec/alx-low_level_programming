#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints out elements of nodes
 * @h: list's head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;
	node *temp = h;

	size = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] ", temp->len);
		printf("%s\n", temp->str);
		size++;
		temp = temp->next;
	}
	return (size);
}
