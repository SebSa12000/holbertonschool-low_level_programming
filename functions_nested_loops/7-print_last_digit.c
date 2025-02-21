#include "main.h"

/**
 * print_last_digit - renvoi le dernier digit
 * @i: valeur
 *
 * Return: valeur %10
 */
int print_last_digit(int i)
{
	int valeur = 0;
	if ( i < 0 ) 
		valeur = ((-1) * i ) % 10;
	else 
		valeur = i % 10;
	_putchar(valeur + '0');
	return (valeur);
}
