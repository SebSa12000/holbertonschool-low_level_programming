#include "main.h"

/**
 * print_last_digit - renvoi le dernier digit
 * @i: valeur
 *
 * Return: valeur %10
 */
int print_last_digit(int i)
{
	long valeur = i;
	if ( valeur < 0 ) 
	{
		valeur = ( (long)(valeur*-1) )  % 10;
	}
	else 
	{
		valeur = valeur % 10;
	}
	if ( valeur< 0 || valeur> 9)
	{
		_putchar('E');
	}
	_putchar(valeur + '0');
	return (valeur);
}
