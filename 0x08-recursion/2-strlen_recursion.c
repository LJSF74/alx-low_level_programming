#include "main.h"
/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string
 * Return: l
 */
int _strlen_recursion(char *s)
{
	int l = 0;
	if (*s)
	{
		l++;
		l = l + _strlen_recursion(s + 1)
	}
	return (l);
}
