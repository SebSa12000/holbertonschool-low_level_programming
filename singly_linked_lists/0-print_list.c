#include "lists.h"
/**
 * print_list - print a list chain
 * @h : head
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;
	char *string;
	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str== NULL)
			{
			_putchar('[');
			_putchar('0');
			_putchar(']');
				string = "(nil)";
			}
			else
			{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
				string = h->str;
			}
			_putchar(' ');
			while ( *string != '\0' )
			{
				_putchar(*string);
				string++;
			}
			_putchar('\n');
			length ++;
			h = h->next;
		} 
	}
	return length;
}
