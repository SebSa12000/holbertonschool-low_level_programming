#include "main.h"

/**
 * times_table - table de multiplication
 *
 */
void times_table(void)
{
	int last = 0;
	int last2 = 0;
	int i = 0;
	int j = 0;
	int mult = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if (mult < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
				if (j < 9)
				{
					_putchar(',');
				}

			}
			else if (mult < 100)
			{
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				if (j < 9)
					_putchar(',');

			}

		}
	}
