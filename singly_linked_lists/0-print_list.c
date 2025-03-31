#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate
 *
 * Return: length
 */
int _strlen(char *s)
{
	int retour = 0;

	while (*s != '\0')
	{
		s++;
		retour++;
	}
	return (retour);
}

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
				printf("[%d] %s\n", (int)_strlen(h->str), h->str);
			}
			length++;
			h = h->next;
		}
	}
	return (length);
}
