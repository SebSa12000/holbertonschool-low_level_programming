#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * append_text_to_file : append a text to file
 * @filename : name of file
 * @text_content : content of text
 *
 * Return: size read
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (text_content == NULL)
		text_content = "";

	/* test if open fail */
	if (fd < 0)
	{
		return (-1);
	}
	length = (size_t)strlen(text_content);
	write(fd, text_content, length);
	close(fd);
	return (1);
}
