#include "main.h"
/**
 * jack_bauer - prints all hours of the day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i <=23 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			_putchar(i + ':' + j);
		}
	}
}
