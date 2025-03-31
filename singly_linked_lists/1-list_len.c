#include "lists.h"
#include <stdio.h>
#include <string.h>


/**
 * list_len - add the length of a list
 * @h : head
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	if (h != NULL)
	{
		length++;
		while (h->next != NULL)
		{
			length++;
			h = h->next;
		}
	}
	else
		return (0);
	return (length);
}
