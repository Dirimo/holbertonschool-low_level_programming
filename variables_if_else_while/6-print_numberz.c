#include <stdio.h>

/**
 * main - Prints single-digit numbers from 0-9 using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10);	

	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
