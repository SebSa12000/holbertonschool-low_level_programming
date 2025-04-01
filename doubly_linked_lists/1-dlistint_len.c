#include "lists.h"
/**
 * dlistint_len - length of chain
 * @h : head
 *
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
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
