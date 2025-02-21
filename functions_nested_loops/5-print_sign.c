#include "main.h"

/**
 * print_sign - test si un entier est positif
 * @c: entier a controler
 *
 * Return: Always 1/0/-1 (return if sign is >==< 0)
 */
int print_sign(int c)
{
	if (c > 0)
		return (1);
	else if (c == 0)
		return (0);
	else
		return (-1);
}
