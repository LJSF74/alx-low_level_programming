#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints all vars in param
 * @format: var format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char a;
	int b;
	float c;
	char *d;
	int i = 0;
	va_list arg;

	va_start(arg, format);
	while (format)
	{
		if (format[i] == 'c' ||
			format[i] == 'i' ||
			format[i] == 'f' ||
			format[i] == 's')
		{
			a = va_arg(arg, int);
			b = va_arg(arg, int);
			c = va_arg(arg, double);
			d = va_arg(arg, char *);
		}
		printf("%c", a);
		printf("%d", b);
		printf("%f", c);
		printf("%s", d);
		i++;
	}
	printf("\n");
	va_end(arg);
}
