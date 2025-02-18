#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(",");
			putchar(" ");
		}
	}

	putchar('\n');
	return (0);
{
