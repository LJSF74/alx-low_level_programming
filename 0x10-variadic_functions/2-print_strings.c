#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings with separators
 * @separator: separator
 * @n: num of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0 ; i < n ; i++)
	{
		if (va_arg(arg, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(arg, char *));
		}
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
