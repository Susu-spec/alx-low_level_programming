#include "lists.h"
/**
 * list_len - list of elements in a list
 * @h: head of list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *temp = h;

	size = 0;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	return (size);
}
