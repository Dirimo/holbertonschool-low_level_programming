#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number,
 * finds its last digit, and prints whether the last digit
 * is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;          /* The random number */
	int lastDigit;  /* The last digit of n */

	srand(time(0));         /* Seed the random number generator */
	n = rand() - RAND_MAX / 2;  /* Generate a random number */
	lastDigit = n % 10;        /* Get the last digit */

	printf("Last digit of %d is %d ", n, lastDigit); /* Print initial part */

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n"); /* Print if last digit > 5 */
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");           /* Print if last digit is 0 */
	}
	else
	{
		printf("and is less than 6 and not 0\n"); /* Print if last digit < 6 and != 0 */
	}

	return (0);
}
