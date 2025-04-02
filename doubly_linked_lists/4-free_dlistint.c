#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * free_dlistint - free a list link 
 * @head : head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_node, *delete;

	ptr_node = head;
	delete = head;
	while (ptr_node != NULL && ptr_node->next != NULL)
	{
		ptr_node = ptr_node->next;
		if (delete != NULL)
			free(delete);
		delete = ptr_node;
	}
	if (ptr_node != NULL)
		free(ptr_node);

}
