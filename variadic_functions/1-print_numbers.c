#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print a list of numbers 
 * @separator : separator
 * @nb : number of parameter
 *
 * Return: Somme totale
 */
void print_numbers(const char* separator, const unsigned int nb, ...)
{
	int un_int = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, nb);
	for (i = 0; i < nb; i++)
	{
		un_int = va_arg(ap, int);
		printf("%d", un_int);
		if (separator != NULL && i < nb - 1)
			printf("%s", separator);
	}
	printf("\n");
}
