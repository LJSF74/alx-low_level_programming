#include "main.h"
/**
 * _memset - fills n bytes of memory with b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
