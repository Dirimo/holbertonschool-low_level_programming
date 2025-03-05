#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Description: This function calculates the factorial of a non-negative
 *              integer 'n' using recursion.
 *              - If n is less than 0, the function returns -1 to indicate an
 *                error, as factorials are not defined for negative numbers.
 *              - If n is 0, the function returns 1, as the factorial of 0 is
 *                defined to be 1.
 *              - For positive values of n, the function recursively calls
 *                itself with n - 1 and multiplies the result by n. This
 *                continues until n becomes 0, at which point the recursion
 *                stops and the factorial is calculated.
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
