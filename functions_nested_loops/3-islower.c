#include "main.h"

/**
 * _islower - test si un caractere est minuscule ou pas
 * @c: caractere a controler
 *
 * Return: Always 1/0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
