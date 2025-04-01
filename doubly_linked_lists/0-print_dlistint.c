#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dlistint - print a d list chain
 * @h : head
 *
 * Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
