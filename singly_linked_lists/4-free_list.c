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
	list_t *ptr, *ptr2;

	ptr = head;
	ptr2 = head;
	while (ptr != NULL && ptr->next != NULL)
	{
		ptr2 = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptr2;
	}
}
