#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * get_dnodeint_at_index - renvoi l'index d'un noeud dans une liste
 * @head : head
 * @index : index du noeud
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr_node;
	unsigned int i = 0;

	ptr_node = head;
	if (index == 0 && head != NULL)
		return (head);
	if (index == 0 && head == NULL)
		return (NULL);
	while (ptr_node != NULL && ptr_node->next != NULL && i < index)
	{
		ptr_node = ptr_node->next;
		i++;
	}
	if (ptr_node != NULL && i == index)
		return (ptr_node);
	else
		return (NULL);

}
