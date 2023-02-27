#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("\n");
}
