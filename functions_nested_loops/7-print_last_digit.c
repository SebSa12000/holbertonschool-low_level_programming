#include "main.h"

/**
 * print_last_digit - renvoi le dernier digit
 * @i: valeur
 *
 * Return: valeur %10
 */
int print_last_digit(int i)
{
	long valeur = 0;
	if ( i < 0 ) 
	{
		valeur = (i*-1) % 10;
	}
	else 
	{
		valeur = i % 10;
	}
	if ( valeur< 0 || valeur> 9)
	{
		_putchar('E');
	}
	_putchar(valeur + '0');
	return (valeur);
}
