#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_dnodeint - add a new node
 * @head : head
 * @n : int
 *
 * Return: size
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (head != NULL)
		new_node->next = *head;
	else
		new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;
	return (new_node);

}
