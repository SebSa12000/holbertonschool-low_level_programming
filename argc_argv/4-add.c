#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @ac: nombre d'argument
 * @av: tableau de string
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < ac; i++)
	{
		/* controle que ça soit un nombre */
		if (atoi(av[i]) == 0 )
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}
