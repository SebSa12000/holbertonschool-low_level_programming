#include "main.h"

/**
 * _isalpha - test si un caractere est minuscule ou majuscule pas
 * @c: caractere a controler
 *
 * Return: Always 1/0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
