#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @ac: nombre d'argument
 * @av: tableau de string
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int a = 0, b = 0, mul = 0;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
