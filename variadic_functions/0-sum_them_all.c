#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous ses paramètres.
 * @n: Le nombre de paramètres passés à la fonction.
 * @...: Un nombre variable d'arguments entiers.
 *
 * Return: La somme de tous les paramètres. Si n == 0, retourne 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
