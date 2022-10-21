#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to the beginning of the list
 * @head: head of the list
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *) malloc(sizeof(list_t *));

	if (temp == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
