#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**
 * delete_dnodeint_at_index - delete index
 * @h : head
 * @index : index
 *
 * Return: node
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *bfr_node = *h, *tmp_node = *h;

	if (index == 0 && *h)
	{
		if ((*h)->next)
		{
			*h = (*h)->next;
			(*h)->prev = NULL;
			free(tmp_node);
		}
		else
			*h = NULL;
		return (1);
	}
	while (i < index - 1 && bfr_node)
	{
		bfr_node = bfr_node->next;
		i++;
	}
	if (bfr_node)
	{
		tmp_node = bfr_node->next;
		if (tmp_node->next)
			tmp_node->next->prev = bfr_node;
		bfr_node->next = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	return (-1);
}
