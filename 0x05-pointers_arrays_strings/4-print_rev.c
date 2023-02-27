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
	while (i >= 1)
	{
		i--;
		printf("%c", *(s + i));
	}
	printf("\n");
}
