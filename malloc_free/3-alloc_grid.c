#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * alloc_grid - allocation de grille 
 * @width : largeur 
 * @height : hauteur 
 *
 * Return: pointeur sur tableau 
 */
int **alloc_grid(int width, int height)
{
	int **tab ;
	int i = 0;
	
	tab = malloc(sizeof(int *) * width);
	if ( tab != NULL )
	{	
		for (i = 0; i < width; i++)
		{
			tab[i] = malloc(sizeof(int) * height);
		}
		return tab;
	}
	return (NULL);
}
