#include <stdio.h>
#include "lists.h"

/**
 * add_node- entry level
 * @head: the list being passed
 * @str: new node content that should be added
 * Return: size of the passed in list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!newNode)
		return (NULL);

	while (str[len])
		len++;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
