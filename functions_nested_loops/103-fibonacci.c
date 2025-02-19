#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms in the Fibonacci
 *        sequence whose values do not exceed 4,000,000, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, next, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		next = a + b;
		a = b;
		b = next;
	}

	printf("%ld\n", sum);

	return (0);
}
