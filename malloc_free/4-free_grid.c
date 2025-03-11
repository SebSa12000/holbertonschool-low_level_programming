#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * free_grid - desaloue la grille
 * @tab : tableau
 * @height : hauteur
 *
 * Return: pointeur sur tableau
 */
void free_grid(int **tab, int height)
{
	int i = 0;

	if (tab != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(tab[i]);
		}
		free(tab);
	}
}

