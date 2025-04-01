#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_node_end - add a new node to end
 * @head : head
 * @str : string
 *
 * Return: size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	char *string;

	string = strdup(str);
	if (string == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	ptr = *head;
	new_node->next = NULL;
	while (ptr != NULL && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	if (ptr != NULL)
		ptr->next = new_node;
	new_node->str = string;
	new_node->len = _strlen(string);

	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
