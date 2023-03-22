#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name from pointer
 * @name: name to print
 * @f: function to be used on name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f)
		{
			(*f)(name);
		}
	}
}
