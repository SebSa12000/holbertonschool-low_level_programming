#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print a list of numbers 
 * @separator : separator
 * @nb : number of parameter
 *
 * Return: Somme totale
 */
int print_numbers(const char* separator, const unsigned int nb, ...)
{
	int retour = 0, c = 0;
	unsigned int i = 0;
	va_list ap;

	if (nb == 0)
		return (0);

	va_start(ap, nb);
	for (i = 0; i < nb; i++)
	{
		c = va_arg(ap, int);
		printf("%d", c);
		if (separator != NULL && i < nb - 1)
			printf("%s", separator);
	}
	printf("\n");
	return (retour);
}
