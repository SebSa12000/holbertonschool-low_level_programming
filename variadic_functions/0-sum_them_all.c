#include <stdarg.h>
/**
 * sum_them_all - sum of variadic function
 * @nb : number of parameter
 *
 * Return: Somme totale
 */
int sum_them_all(const unsigned int nb, ...)
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
		retour += c;
	}
	return (retour);
}
