#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_node - add a new node
 * @head : head
 * @str : string
 *
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string;

	string = strdup(str);
	if (string == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (head != NULL)
		new_node->next = *head;
	else
		new_node->next = NULL;
	new_node->str = string;
	new_node->len = _strlen(string);
	*head = new_node;
	return (new_node);
}
