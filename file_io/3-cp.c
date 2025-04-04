#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * close_fd - close a fd
 * @fd : file descriptor
 *
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close %d\n", fd);
		exit(100);
	}
}

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
	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw < 0)
	{
		dprintf(2, " Error: Can't write to NAME_OF_THE_FILE%s\n", av[2]);
		exit(99);
	}
	longueur = 10000 * sizeof(char);
	buffer = malloc(longueur);
	if (buffer == NULL)
		exit(99);
	fd = open(av[1], O_RDONLY);
	if (fd >= 0)
		length = read(fd, buffer, longueur);
	if (fd < 0 || ((int) length) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw >= 0)
		length = write(fdw, buffer, length);
	if (fdw < 0 || ((int) length) == -1)
	{
		dprintf(2, " Error: Can't write to NAME_OF_THE_FILE%s\n", av[2]);
		exit(99);
	}
	close_fd(fd);
	close_fd(fdw);
	return (0);
}
