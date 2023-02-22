#include "main.h"
#include <stdio.h>
/**
 * times_table - prints multiplaction table of numbers 1 to 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			printf("%d", i * j);
			if (j < 9 && i * j < 10)
			{
				printf(",..");
			}
			else if (j < 9 && i * j >= 10)
			{
				printf(",.");
			}
		}
		printf("\n");
	}
}
