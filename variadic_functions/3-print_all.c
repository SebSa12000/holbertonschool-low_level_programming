#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a list of string
 * @separator : separator
 * @nb : number of parameter
 *
 */
void print_all(const char * const format, ...)
{
	char *une_chaine;
	unsigned int i = 0;
	va_list ap;
	int flag_sep = 0;


	va_start(ap, format);
	for (i = 0; i < strlen(format); i++)
	{
		flag_sep = 0;
		switch ( format[i] )
		{

			case 's':
				flag_sep = 1;

				une_chaine = va_arg(ap, char *);
				if (une_chaine == NULL)
					printf("(nil)");
				else
					printf("%s", une_chaine);
				break;
			case 'i':
				flag_sep = 1
					printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, char));
				flag_sep = 1;
				break;
			case 'f':
				flag_sep = 1; 
				printf("%f", va_arg(ap, float));
				break;
		}
		if (separator != NULL && i < nb - 1 && flag_sep == 1)
			printf("%s", separator);
	}
	printf("\n");
}
