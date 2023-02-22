#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers starting from int in param to 98
 * @n: start position
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i <= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
				print(", ");
		}
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
