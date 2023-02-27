#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses string in param
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char a, b;

	while (*(s + l) != '\0')
	{
		l++;
	}
	l--;
	while (i < l)
	{
		a = *(s + i);
		b = *(s + l);
		*(s + i) = b;
		*(s + l) = a;
		i++;
		l--;
	}
}
