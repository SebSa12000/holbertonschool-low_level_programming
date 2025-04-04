#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - check the code
 * @ac : nomber of argument
 * @av : variadic params
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdw, fd, longueur;
	char *buffer;
	size_t length;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);

	longueur = 10000 * sizeof(char);
	buffer = malloc(longueur);
	if (buffer == NULL)
		exit(99);


	fd = open(av[1], O_RDONLY);
	length = read(fd, buffer, longueur);

	write(fdw, buffer, length);
	/* test if open fail */
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(fd);
	close(fdw);
	return (0);
}
