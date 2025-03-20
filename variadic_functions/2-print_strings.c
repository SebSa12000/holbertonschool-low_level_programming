#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - print a list of string 
 * @separator : separator
 * @nb : number of parameter
 *
 */
void print_strings(const char *separator, const unsigned int nb, ...)
{
	char *une_chaine;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, nb);
	for (i = 0; i < nb; i++)
	{
		une_chaine = va_arg(ap, char *);
		if (une_chaine == NULL)
			printf("(nil)");
		else
			printf("%s", une_chaine);
		if (separator != NULL && i < nb - 1)
			printf("%s", separator);
	}
	printf("\n");
}
