#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @p - variable of given number
 * @q - test
 * Return: square root or -1.
 *
 */

int power_operation(int p, int q)
{
	if (q * q > p)
		return (-1);

	if (q * q == p)
		return (q);

	return (find_root(p, q+1));
}

/**
 * _sqrt_recursion - find natural square root of p
 * @p : p
 * Return: returns int of squareroot, or -1 if not natural root
 */

int _sqrt_recursion(int p)
{
	if (p < 0)
		return (-1);

	return (find_root(p, 0));
}
