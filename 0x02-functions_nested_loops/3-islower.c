#include "main.h"
/**
 * _islower - returns 1 if lowercase and 0 if not
 *
 * Return: 1
 * Return: 0
 */
int _islower(int c)
{
	char i;
	int j;

	for (j = 0 ; j <= 20 ; i++)
	{
		if (c == j)
			return (1);
	}
	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (c == i)
			return (0);
	}
	return (1);
}
