#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a str
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	n = i / 2;
	while (n < i)
	{
		printf("%c", *(str + n));
		n++;
	}
	printf("\n");
}
