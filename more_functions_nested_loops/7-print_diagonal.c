#include "main.h"
/**
 * print_diagonal - affiche une ligne en diagonale
 *@n : nombre de \
 *
 */
void print_diagonal(int n)
{
	int i = 0;
	int last = 0;

	if (n > 0)
	{
		do {
			last++;
			for (i = 0; i < last; i++)
			{
				if (i < last - 1)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		} while (last < n);
	}
	else
		_putchar('\n');
}
