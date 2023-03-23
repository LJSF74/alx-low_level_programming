#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers with separator
 * @separator: separator
 * @n: number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
