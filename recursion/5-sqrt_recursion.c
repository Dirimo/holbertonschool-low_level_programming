#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Description: This function calculates the natural square root of a
 *              non-negative integer 'n' using recursion.
 *              - If n is less than 0, the function returns -1 to indicate an
 *                error, as square roots are not defined for negative numbers.
 *              - If n is 0, the function returns 0, as the square root of 0
 *                is 0.
 *              - The function uses a helper function 'find_sqrt' to perform
 *                the recursive calculation.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Description: This function recursively searches for the natural square root
 *              of 'n' by incrementing the 'guess' until 'guess * guess' is
 *              equal to 'n'.
 *              - If 'guess * guess' is greater than 'n', it means 'n' does
 *                not have a natural square root, and the function returns -1.
 *              - If 'guess * guess' is equal to 'n', the function returns
 *                'guess' as the natural square root.
 *              - Otherwise, the function recursively calls itself with the
 *                same 'n' and an incremented 'guess'.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (find_sqrt(n, guess + 1));
}
