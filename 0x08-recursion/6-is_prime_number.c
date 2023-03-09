#include "main.h"
/**
 * is_prime - checks if b is prime
 * @a: incremened int
 * @b: int to check
 * Return: 0 or 1
 */
int is_prime(int x, int y)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(a + 1), b);
	}
}
/**
 * is_prime_number - checks if n is prime
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check(2, n));
	}
}
