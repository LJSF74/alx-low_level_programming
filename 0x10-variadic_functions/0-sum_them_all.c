#include "variadic_functions.h"
/**
 * sum_them_all - sums all the ints in arg
 * @n: first int
 * Return: s
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0 ; i < n ; i++)
	{
		s += va_arg(arg, int);
	}
	va_end(arg);
	return (s);
}
