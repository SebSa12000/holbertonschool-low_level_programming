#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_dnodeint_end - add a new node
 * @head : head
 * @n : int
 *
 * Return: size
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	ptr_node = *head;
	while (ptr_node != NULL && ptr_node->next != NULL)
		ptr_node = ptr_node->next;

	if (ptr_node != NULL)
	{
		ptr_node->next = new_node;
		new_node->next = NULL;
		new_node->prev = ptr_node;
	}
	else
	{
		ptr_node = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	return (new_node);

}
