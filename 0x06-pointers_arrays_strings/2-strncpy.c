#include "main.h"
#include <string.h>
/**
 * _strncpy - copies src string to dest
 * @dest: destination
 * @src: source
 * @n: num of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
