#include "main.h"
/**
 * print_triangle - affiche un triangle
 *@n : nombre de #
 *
 */
void print_triangle(int n)
{
	int i = 0;
	int last = 0;

	if (n > 0)
	{
		do {
			last++;
			for (i = 0; i < n; i++)
			{
				if (i < (n - last))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		} while (last < n);
	}
	else
		_putchar('\n');
}
