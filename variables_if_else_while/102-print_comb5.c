#include <stdio.h>

/**
 * main - Prints all possible combinations of three digits.
 * Numbers must be separated by commas and a space.
 * The two digits must be different
 * Numbers should be printed in ascending order, with two digitsi
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;
	int p;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				for (p = z + 1; p <= '9'; p++)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					putchar(p);
					if (x != '6' || y != '7' || z != '8' || p != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
