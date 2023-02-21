#include "main.h"
/**
 * _islower - returns 1 if lowercase and 0 if not
 * @c: char or int
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
