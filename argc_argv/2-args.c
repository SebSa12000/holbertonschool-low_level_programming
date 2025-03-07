#include <stdio.h>
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

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
