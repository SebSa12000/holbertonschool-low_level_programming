#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - mini printf
 * @format : format i, c, f, s
 *
 */
void print_all(const char * const format, ...)
{
	char *une_chaine;
	unsigned int i = 0;
	va_list ap;
	int flag_sep = 0;
	const char *ptr = format;

	va_start(ap, format);
	while (ptr[i] != '\0')
	{
		if (flag_sep == 1)
		{
			printf(", ");
			flag_sep = 0;
		}
		switch (format[i])
		{
			case 's':
				flag_sep = 1;
				une_chaine = va_arg(ap, char *);
				if (une_chaine == NULL)
					une_chaine = "(nil)";
				printf("%s", une_chaine);
				break;
			case 'i':
				flag_sep = 1;
					printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				flag_sep = 1;
				break;
			case 'f':
				flag_sep = 1;
				printf("%f", va_arg(ap, double));
				break;
		}
		i++;
	}
	printf("\n");
}
