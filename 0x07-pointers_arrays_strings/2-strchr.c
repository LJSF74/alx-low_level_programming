#include "main.h"
#include <string.h>
/**
 * _strchr - returns pointer to 1st occurence of c
 * @s: char to parse
 * @c: char to find
 * Return: charac
 */
char *_strchr(char *s, char c)
{
	static char *charac;
	int i = 0;

	while (s[i] != '\0')
	{
		ret = strchr(s, c);
		i++;
	}
	return (charac);
}
