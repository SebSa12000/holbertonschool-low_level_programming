#include "lists.h"
/**
 * sum_dlistint - sum the list
 * @h : head
 *
 * Return: Sum
 */
int sum_dlistint(dlistint_t *h)
{
	int total = 0;

	if (h != NULL)
	{
		do {
			total += h->n;
			h = h->next;
		} while (h != NULL);
	}
	else
		return (0);
	return (total);
}
