#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * alloc_grid - allocation de grille 
 * @height : hauteur 
 * @width : largeur 
 *
 * Return: pointeur sur tableau 
 */
int **alloc_grid(int height, int width)
{
	int **tab ;
	int i = 0, j =  0;
	
	if ( width < 1 || height < 1 )
		return (NULL);

	tab = malloc(sizeof(int *) * width);
	if ( tab != NULL )
	{	
		for (i = 0; i < width; i++)
		{
			tab[i] = malloc(sizeof(int) * height);
			if ( tab[i] == NULL )
				return (NULL);
			for (j = 0; j < width; j++)
			{
				tab[i][j] = 0;
			}
		}
		return tab;
	}
	return (NULL);
}
