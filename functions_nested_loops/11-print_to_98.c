#include "main.h"

/**
 * print_to_98_sup98 - table de multiplication
 * @n : valeur de depart
 *
 */
void print_to_98_sup98(int n)
{
	int i = 0;

	for (i = n; i >= 98; i--)
	{
		if (i >= 100)
		{
			_putchar((i / 100) + '0');
			_putchar(((i % 100) / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (i < 10)
		{
			_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
/**
 * print_to_98 - table de multiplication
 * @n : valeur de depart
 *
 */
void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
		print_to_98_sup98(n);
	else if (n < 98)
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
				_putchar('-');
			if (i <= -100)
			{
				_putchar(((i * -1) / 100) + '0');
				_putchar((((i * -1) % 100) / 10) + '0');
				_putchar(((i * -1) % 10) + '0');
			}
			else if (i <= -10)
			{
				_putchar((((i * -1) % 100) / 10) + '0');
				_putchar(((i * -1) % 10) + '0');
			}
			else if (i < 0)
				_putchar(((i * -1) % 10) + '0');
			else if (i >= 10 && i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i >= 0 && i < 10)
				_putchar(((i) % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');

}
