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
	unsigned long int a_half1 = 0, a_half2 = 0, b_half1 = 0, b_half2 = 0,
			  next_half1, next_half2;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		if (a + b > 10000000000 || a_half1 > 0 || b_half1 > 0)
		{
			a_half1 = a / 10000000000;
			a_half2 = a % 10000000000;
			b_half1 = b / 10000000000;
			b_half2 = b % 10000000000;
			next_half1 = a_half1 + b_half1;
			next_half2 = a_half2 + b_half2;

			if (next_half2 > 10000000000)
			{
				next_half1 += 1;
				next_half2 %= 10000000000;
			}

			printf(", %lu%010lu", next_half1, next_half2);

			a = b;
			a_half1 = b_half1;
			a_half2 = b_half2;
			b = next_half1 * 10000000000 + next_half2;
		}
		else
		{
			next = a + b;
			printf(", %lu", next);
			a = b;
			b = next;
		}
	}

	printf("\n");

	return (0);
}
