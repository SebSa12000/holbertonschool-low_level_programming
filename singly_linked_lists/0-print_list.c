#include "lists.h"

void reverse(char s[]);

/**
 * itoa - convertir n en caractères dans s
 * @n: value to convert
 * @s: string buffer
 *
 */
void itoa(long n, char s[])
{
	long i, sign;

	sign = n;
	if (sign < 0)
		/* enregistrer le signe */
		n = -n;
	/* rendre n positif */
	i = 0;
	do {
		s[i++] = n % 10 + '0';
		/* obtenir le chiffre suivant */
	} while ((n /= 10) > 0); /* le supprimer */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

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
 * reverse - reverse a string
 * @s: string to reverse
 */
void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


/**
 * print_list - print a list chain
 * @h : head
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	char buffer[100];
	size_t length = 0;
	char *string, *string2;

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
				string = h->str;
				_putchar('[');
				itoa(_strlen(string), buffer);
				string2 = buffer;
				while ( *string2 != '\0' )
				{
					_putchar(*string2);
					string2++;
				}
				_putchar(']');
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
