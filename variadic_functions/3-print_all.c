#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string.
 * @format: A string containing the format characters.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          Any other char should be ignored.
 * @...: Variable arguments based on the format string.
 *
 * Description: Prints a new line at the end of the function.
 *              You are allowed to use printf.
 *              If format is NULL, do nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char separator[4] = ""; /* Holds ", " or "" */

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, (float)va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue; /* Skip to the next char in format */
			}

			/* Set separator to ", " after the first argument */
			sprintf(separator, ", ");
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
