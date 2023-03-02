#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2: second str
 * Return: i
 */
int _strcmp(char *s1, char *s2)
{
	int a = *s1;
	int b = *s2;

	while (a == b)
	{
		a = *s1++;
		b = *s2++;
		if (a == '\0')
			return (a - b);
	}
	return (a - b);
}
