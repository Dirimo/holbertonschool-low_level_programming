#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("%dand is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("%dand is 0\n");
	}
	else
	{
		printf("%dand is less than 6 and not 0\n");
	}

	return (0);
}

