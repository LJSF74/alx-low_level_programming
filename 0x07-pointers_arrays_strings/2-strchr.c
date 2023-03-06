#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns pointer to 1st occurence of c
 * @s: char to parse
 * @c: char to find
 * Return: charac
 */
char *_strchr(char *s, char c)
{
	static char charac[sizeof(s)];
	int i = 0;
	unsigned long int j;
	int k = 0;

	while (s[i] != c)
	{
		i++;
		if (i == sizeof(s))
		{
			return (NULL);
		}
	}
	for (j = i ; j < sizeof(s); j++)
	{
		charac[k] = s[j];
		k++;
	}
	return (charac);
}
