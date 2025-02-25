#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers 0 to 14,
 * repeated 10 times. Each set of numbers is followed by a newline.
 * It uses _putchar to print characters and is limited to using
 * _putchar only three times in the code.
 */
void more_numbers(void)
{
	int i, num;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			c = num;
			if (num > 9)
			{
				_putchar('1');
				c = num % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
 
