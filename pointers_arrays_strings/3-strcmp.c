#include "main.h"
/**
 * _strcmp -compare deux chaines
 * @dest : destination
 * @src : sources
 *
 * Return: int
 */
int _strcmp(char *dest, char *src)
{
	char *dest2 = dest;
	char *src2 = src;

	while (*src2 != '\0' && *dest2 != '\0')
	{
		if (*dest2 > *src2)
			return (*dest2 - *src2);
		if (*src2 > *dest2)
			return (*dest2 - *src2);

		src2++;
		dest2++;
	}
	if (*src2 == '\0' && *dest2 == '\0')
		return (0);
	if (*src2 == '\0')
		return (*dest2);
	if (*dest2 == '\0')
		return (*src2);

	return (0);
}

