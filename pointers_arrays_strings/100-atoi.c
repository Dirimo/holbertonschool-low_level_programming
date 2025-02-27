#include "main.h"

/**
 * Function that convert sting to an int
 * number in the str can be preceded by infinite number of char
 * take acount - and + signs before the number
 * Function must return 0
 * not allowed to use @long, new var de type arr and hard-code special values
 *
 * Will use -fsanitize=signed-integer-overflow gcc flag to compile
 */
int _atoi(char *s)
{

	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle leading whitespace and signs */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
		i++;

	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for potential overflow before multiplying */
		if (result > (2147483647 / 10) || (result == (2147483647 / 10) && (s[i] - '0') > 7))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
