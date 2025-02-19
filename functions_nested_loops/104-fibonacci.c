#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next, i;
	unsigned long int a1 = 0, a2 = 0, b1 = 0, b2 = 0, next1, next2;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		if (next < a || next < b)
		{
			a1 = a / 1000000000;
			a2 = a % 1000000000;
			b1 = b / 1000000000;
			b2 = b % 1000000000;
			next1 = a1 + b1;
			next2 = a2 + b2;
			if (next2 < a2 || next2 < b2)
				next1 = next1 + 1;
			printf(", %lu%09lu", next1, next2);
			a = b;
			b = next;
		}
		else
		{
			printf(", %lu", next);
			a = b;
			b = next;
		}
	}
	printf("\n");
	return (0);
}
