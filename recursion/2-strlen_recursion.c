#include "main.h"
/**
 * _strlen_recursion - longueur de chaine recursive
 * @s : chaine a afficher
 *
 * Return: longueur de chaine
 */
int _strlen_recursion(char *s)
{
	char *suivant = s;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		suivant++;
		return (1 + _strlen_recursion(suivant));
	}
}
