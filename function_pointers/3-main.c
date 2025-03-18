#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @ac: nombre d'argument
 * @av: tableau de string
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int (*f)(int a, int b);
	int valeur1 = 0, valeur2 = 0;
	char *operande;

	if (ac == 4)
	{
		(void)f;
		valeur1 = atoi(av[1]);
		valeur2 = atoi(av[3]);
		operande = av[2];
		f = get_op_func(operande);
		if (f != NULL)
		{
			if ((*f == op_mod || *f == op_div) && (valeur2 == 0))
			{
				printf("Error\n");
				exit(100);
			}
			else
			{
				printf("%d\n", f(valeur1, valeur2));
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
