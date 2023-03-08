#include "main.h"
/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string
 * Return: l
 */
int _strlen_recursion(char *s)
{
	static int l = 0;
	if (*s == '\0')
	{
		return (l);
	}
	else
	{
		l++;
		return (_strlen_recursion(s + 1));
	}
}
