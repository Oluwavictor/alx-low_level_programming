#include "main.h"

/**
 * is_prime - find prime numbers
 * @p: natural number
 * @q: counter or divisor of p.
 *
 * Return: 1 if is prime 0 otherwise.
 */ 

int is_prime(int p, int q)
{
	if (p % q == 0)
		return (0);

	else if (q == (p - 1) && p % q != 0)
		return (1);

	else
		return (is_prime(p, q + 1);
}

/**
 * is_prime_number - function that returns 1,
 * if the input integer is a prime number.
 * @p: natural number
 *
 * Return: 1 if prime and 0 if otherwise
 */

int is_prime_number(int p)
{
	if (p <= 1)
	{
		return (0);
	}
	else if (p == 2)
	{
		return (1);

	}
	else
		return (is_prime(p, 2))
}
