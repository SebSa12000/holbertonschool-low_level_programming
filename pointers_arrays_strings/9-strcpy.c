#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copie de chaine de caractere
 * @dest: chaine destination
 * @src: chaine source
 *
 * Return: pointeur sur char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
