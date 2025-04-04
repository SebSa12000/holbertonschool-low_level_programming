#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read a text file
 *
 * Return: size read
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int longueur = 0;
	size_t length;
	char *buffer;

	if (filename == NULL)
		return 0;
	fd = open(filename, O_RDONLY);

	/* test if open fail */
	if (fd < 0)
	{
		return 0;
	}
	longueur = (int)letters;

	buffer = malloc(sizeof(char)*longueur);

    	length = read(fd, buffer, longueur);

	if ((int)length == -1)
		return 0;
	printf("%s",buffer);		
	free(buffer);
	return length;
}
