#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Description: This function calculates x raised to the power of y using
 *              recursion.
 *              - If y is less than 0, the function returns -1 to indicate an
 *                error, as exponents are not defined for negative numbers.
 *              - If y is 0, the function returns 1, as any number raised to
 *                the power of 0 is defined to be 1.
 *              - For positive values of y, the function recursively calls
 *                itself with y - 1 and multiplies the result by x. This
 *                continues until y becomes 0, at which point the recursion
 *                stops and the power is calculated.
 *
 * Return: The value of x raised to the power of y, or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
