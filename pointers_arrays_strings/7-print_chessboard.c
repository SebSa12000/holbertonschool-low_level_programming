#include "main.h"
/**
 *  print_chessboard- affiche un echiquier
 * @echiquier: tableau de piece
 *
 */
void print_chessboard(char (*echiquier)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(echiquier[i][j]);
		_putchar('\n');
	}
}
