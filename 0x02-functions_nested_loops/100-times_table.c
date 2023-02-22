#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints mult table of prime nums between 0 and 15
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				m = i * j;
				if (j != 0)
				{
					if (m < 10)
					{
						printf(",   ");
					}
					else if (m < 100)
					{
						printf(",  ");	
					}
					else
					{
						printf(", ");
					}
				}
			}
		}
	}
}
