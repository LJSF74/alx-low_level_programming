#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints nums from 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
