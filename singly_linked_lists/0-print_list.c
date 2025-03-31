#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print a list chain
 * @h : head
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", (int)strlen(h->str), h->str);
			}
			length++;
			h = h->next;
		}
	}
	return (length);
}
