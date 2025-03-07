#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_numeric - teste si une chaine est un numeric
 * @s : char *s
 *
 * Return: Always 0-1.
 */
int is_numeric(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		if (*p >= '0' && *p <= '9')
			p++;
		else
			return (0);
	}
	return (1);
}

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
		if (is_numeric(av[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}
