#include "main.h"
/**
 * factorial - prints factorial of n recursively
 * @n: num
 * Return: factn
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
