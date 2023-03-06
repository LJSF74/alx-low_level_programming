#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: copied data
 * @src: data to be copied
 * @n: num of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
