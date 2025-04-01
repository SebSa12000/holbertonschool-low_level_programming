#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * free_list - free a list
 * @head : head
 *
 */
void free_list(list_t *head)
{
	/**/
	list_t *new_node, *ptr;

	ptr = *head;
	ptr2 = *head;
	while (ptr != NULL && ptr->next != NULL)
	{
		ptr2 = ptr->next;
		free(ptr->string);
		free(ptr);
		ptr = ptr2;
	}
}
