#include "main.h"
/**
 * print_square - affiche un carre
 *@n : nombre de \
 *
 */
void print_square(int n)
{
	int i = 0;
	int last = 0;

	if (n > 0)
	{
		do {
			last++;
			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		} while (last < n);
	}
	else
		_putchar('\n');
}
